// Fill out your copyright notice in the Description page of Project Settings.

#include "CSCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Controller.h"
#include "DrawDebugHelpers.h"
#include "CSWeapon.h"
#include "Actions/CSAction.h"
#include "Components/CSActionComponent.h"
#include "Components/CSHealthComponent.h"

static int32 GenericDebugDraw = 0;
FAutoConsoleVariableRef CVARGenericDebugDraw(
	TEXT("CS.GenericDebugDraw"),
	GenericDebugDraw,
	TEXT("Draw all genric debug"),
	ECVF_Cheat);

static int32 DebugDetectionDrawing = 0;
FAutoConsoleVariableRef CVARDebugDetectionDrawing(
	TEXT("CS.DebugDetectionDrawing"),
	DebugDetectionDrawing,
	TEXT("Draw all detection debug"),
	ECVF_Cheat);

// Sets default values
ACSCharacter::ACSCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
	CameraComp->bUsePawnControlRotation = false;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);

	ActionComp = CreateDefaultSubobject<UCSActionComponent>(TEXT("ActionComp"));

	HealthComp = CreateDefaultSubobject<UCSHealthComponent>(TEXT("HealthComp"));

	CurrentState = CharacterState::DEFAULT;
	LastState = CurrentState;

	TurnRate = 45.0f;
	LookRate = 45.0f;

	WeaponAttachSocketName = "WeaponSocket";

	ArmLengthInterpSpeed = 2.5f;
	EnemyDetectionDistance = 600.0f;
	MultipleEnemiesArmLength = 500.0f;

	//Target Locking
	TimeBetweenEnemyChange = 0.4f;
	CanChangeLockedEnemy = true;

	NearbyEnemies = 0;
	MaxDistanceToEnemies = 0.0f;
}

// Called when the game starts or when spawned
void ACSCharacter::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->MaxWalkSpeed = JogSpeed;

	DefaultArmLength = SpringArmComp->TargetArmLength;
	DefaultSocketOffset = SpringArmComp->SocketOffset;

	// Spawn a default weapon
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CurrentWeapon = GetWorld()->SpawnActor<ACSWeapon>(StarterWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	if (CurrentWeapon)
	{
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
	}

	//Check for enemies every second
	FTimerHandle TimerHandle_CheckNearbyEnemies;
	GetWorldTimerManager().SetTimer(TimerHandle_CheckNearbyEnemies, this, &ACSCharacter::OnDetectNearbyEnemies, 0.5f, true);

	HealthComp->OnHealthChanged.AddDynamic(this, &ACSCharacter::OnHealthChanged);
}

void ACSCharacter::AdjustCamera(float DeltaTime)
{
	//Set as default values
	float TargetFOV = DefaultFOV;
	float InterpolationSpeed = ArmLengthInterpSpeed;
	float TargetArmLength = DefaultArmLength;
	FVector TargetOffset = DefaultSocketOffset;

	if (TargetLocked)
	{
		InterpolateLookToEnemy();
	}

	if (NearbyEnemies > 0 || TargetLocked)
	{
		TargetOffset = MultipleEnemiesSocketOffset;

		if (NearbyEnemies > 1)
		{
			TargetArmLength = FMath::Clamp(MaxDistanceToEnemies, DefaultArmLength, MultipleEnemiesArmLength);
		}
		else
		{
			TargetOffset.Z *= 0.5f;
		}
	}


	//FOV
	float NewFOV = FMath::FInterpTo(CameraComp->FieldOfView, TargetFOV, DeltaTime, InterpolationSpeed);
	CameraComp->SetFieldOfView(NewFOV);

	//Socket
	FVector NewSocketOffset = FMath::Lerp(SpringArmComp->SocketOffset, TargetOffset, DeltaTime * InterpolationSpeed);
	SpringArmComp->SocketOffset = NewSocketOffset;

	//Arm Length
	float NewArmLength = FMath::FInterpTo(SpringArmComp->TargetArmLength, TargetArmLength, DeltaTime, InterpolationSpeed);
	SpringArmComp->TargetArmLength = NewArmLength;
}

void ACSCharacter::MoveForward(float Value)
{
	if (CurrentState == CharacterState::ATTACKING ||CurrentState == CharacterState::DODGING) {
		return;
	}

	if (Controller != nullptr && Value != 0.0f)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);
		const FVector direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X);

		AddMovementInput(direction, Value);
	}
}

void ACSCharacter::MoveRight(float Value)
{
	if (CurrentState == CharacterState::ATTACKING || CurrentState == CharacterState::DODGING) {
		return;
	}

	if (Controller != nullptr && Value != 0.0f)
	{
		//AddMovementInput(GetActorRightVector() * Value);
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);
		FVector direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y);

		AddMovementInput(direction, Value);
	}
}

void ACSCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);

	if (CanChangeLockedEnemy && TargetLocked && Value != 0.0f)
	{
		ChangeLockedTarget(Value);
	}
}

void ACSCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void ACSCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * GetWorld()->GetDeltaSeconds() * TurnRate);

	if (CanChangeLockedEnemy && TargetLocked && Rate != 0.0f)
	{
		ChangeLockedTarget(Rate);
	}
}

void ACSCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * GetWorld()->GetDeltaSeconds() * LookRate);
}

void ACSCharacter::StartRunning()
{
	CurrentState = CharacterState::RUNNING;
	GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void ACSCharacter::StopRunning()
{
	CurrentState = CharacterState::DEFAULT;
	GetCharacterMovement()->MaxWalkSpeed = JogSpeed;

	if (TargetLocked) {
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
}

void ACSCharacter::OnHealthChanged(UCSHealthComponent* HealthComponent, float CurrentHealth, float HealthDelta, 
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (CurrentHealth <= 0.0f)
	{
		//Die
	}
}

#pragma region Target Locking
void ACSCharacter::ToggleLockTarget()
{
	TargetLocked = !TargetLocked;

	//Start targeting target
	if (TargetLocked)
	{
		LockTarget();
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
	else
	{
		GetCharacterMovement()->bOrientRotationToMovement = true;
	}
}

void ACSCharacter::LockTarget()
{
	//TODO: Change this for enemy class
	TArray<ACharacter*> FoundCharacters = GetAllVisibleEnemies(EnemyDetectionDistance * 2.0f);
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

	//Find closest enemy
	float ClosestEnemyDistance = 100000000000.0f;
	float MaximumDot = 0.35f;
	ACharacter* ClosestEnemy = nullptr;
	for (size_t i = 0; i < FoundCharacters.Num(); i++)
	{
		if (FoundCharacters[i] == this)
			continue;


		FVector VectorToEnemy = FoundCharacters[i]->GetActorLocation() - GetActorLocation();
		float Dot = FVector::DotProduct(VectorToEnemy.GetSafeNormal(), CameraComp->GetForwardVector().GetSafeNormal());
		float distance = FVector::Distance(GetActorLocation(), FoundCharacters[i]->GetActorLocation());

		if (Dot > MaximumDot && distance < ClosestEnemyDistance || distance < EnemyDetectionDistance * 0.75f)
		{
			ClosestEnemyDistance = distance;
			MaximumDot = Dot;
			ClosestEnemy = FoundCharacters[i];
			//UE_LOG(LogTemp, Log, TEXT("Dot: %.2f"), Dot);
		}
	}

	//If there is an enemy in range lock it
	if (ClosestEnemy != nullptr)
	{
		LockedEnemy = ClosestEnemy;
		//UE_LOG(LogTemp, Warning, TEXT("Target Locked: %s"), *LockedEnemy->GetName());
	}
	//If not, stay unlocked
	else
	{
		TargetLocked = false;
	}
}


void ACSCharacter::ChangeLockedTarget(float Direction)
{
	if (LockedEnemy == nullptr) {
		return;
	}

	//TODO: Change this for enemy class
	TArray<ACharacter*> FoundCharacters = GetAllVisibleEnemies(EnemyDetectionDistance * 2.0f);
	//UE_LOG(LogTemp, Log, TEXT("Enemies: %i"), FoundCharacters.Num());
	ACharacter* ClosestEnemy = nullptr;

	float ClosestRightDot = 1.0f;
	float ClosestForwardDot = 1.0f;

	FVector VectorToTargettedEnemy = LockedEnemy->GetActorLocation() - GetActorLocation();
	float LockedEnemyRightDot = FVector::DotProduct(VectorToTargettedEnemy.GetSafeNormal(), CameraComp->GetRightVector().GetSafeNormal());
	float LockedEnemyForwardDot = FVector::DotProduct(VectorToTargettedEnemy.GetSafeNormal(), CameraComp->GetForwardVector().GetSafeNormal());

	for (size_t i = 0; i < FoundCharacters.Num(); i++)
	{
		if (FoundCharacters[i] == this || FoundCharacters[i] == LockedEnemy)
			continue;

		FVector VectorToEnemy = FoundCharacters[i]->GetActorLocation() - GetActorLocation();
		float RightDot = FVector::DotProduct(VectorToEnemy.GetSafeNormal(), CameraComp->GetRightVector().GetSafeNormal());
		float ForwardDot = FVector::DotProduct(VectorToEnemy.GetSafeNormal(), CameraComp->GetForwardVector().GetSafeNormal());

		//                Get left enemy                                   //Get Right Enemy                                                           
		if (Direction < 0.0f && RightDot < LockedEnemyRightDot || Direction > 0.0f && RightDot > LockedEnemyRightDot)
		{
			float RightDotDifference = abs(LockedEnemyRightDot - RightDot);
			float ForwardDotDifference = LockedEnemyForwardDot - ForwardDot;

			//DrawDebugString(GetWorld(), FoundCharacters[i]->GetActorLocation(), FString::SanitizeFloat(RightDot), nullptr, FColor::White, 1.0f);

			if (RightDotDifference < ClosestRightDot && ForwardDotDifference < ClosestForwardDot)
			{
				ClosestRightDot = RightDotDifference;
				ClosestForwardDot = ForwardDotDifference;
				ClosestEnemy = FoundCharacters[i];
				//UE_LOG(LogTemp, Log, TEXT("Dot: %.2f"), RightDot);
			}
		}
	}

	if (ClosestEnemy != nullptr)
	{
		LockedEnemy = ClosestEnemy;
		CanChangeLockedEnemy = false;
		FTimerHandle TimerHandle_LockedEnemyChange;
		GetWorldTimerManager().SetTimer(TimerHandle_LockedEnemyChange, this, &ACSCharacter::EnableLockedEnemyChange, TimeBetweenEnemyChange, false);
	}
}


void ACSCharacter::InterpolateLookToEnemy()
{
	//FVector direction = (LockedEnemy->GetActorLocation() - CameraComp->GetComponentLocation()).GetSafeNormal();
	FVector direction = (LockedEnemy->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	FRotator TargetRotation = UKismetMathLibrary::MakeRotFromXZ(direction, FVector::UpVector);


	if (GetCharacterMovement()->bOrientRotationToMovement)
	{
		//For free run keep the character looking right at the enemy to avoid artifacts
		FRotator InterpolatedRotation = FMath::RInterpTo(GetController()->GetControlRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), 20.0f);
		GetController()->SetControlRotation(InterpolatedRotation);
	}
	else
	{
		//For locked walk
		FRotator InterpolatedRotation = FMath::RInterpTo(GetController()->GetControlRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), 5.0f);
		SetActorRotation(InterpolatedRotation);
		GetController()->SetControlRotation(InterpolatedRotation);
	}
}

void ACSCharacter::EnableLockedEnemyChange()
{
	CanChangeLockedEnemy = true;
}
#pragma endregion

TArray<ACharacter*> ACSCharacter::GetAllVisibleEnemies(float Radius)
{
	TArray<ACharacter*> VisibleEnemies;

	//Get all overlapping elements at a certain distance
	FCollisionShape CollShape;
	CollShape.SetSphere(Radius);

	FCollisionObjectQueryParams QueryParams;
	QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
	QueryParams.AddObjectTypesToQuery(ECC_Pawn);

	TArray<FOverlapResult> Overlaps;
	GetWorld()->OverlapMultiByObjectType(Overlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollShape);

	for (int i = 0; i < Overlaps.Num(); ++i)
	{
		//TODO: Change to enemy class
		ACharacter* Character = Cast<ACharacter>(Overlaps[i].GetActor());
		if (Character && Character != this)
		{
			if (IsEnemyVisible(Character))
			{
				VisibleEnemies.Add(Character);
			}
		}
	}

	return VisibleEnemies;
}

bool ACSCharacter::IsEnemyVisible(ACharacter* Enemy)
{
	if (Enemy == nullptr) {
		return false;
	}

	//Check if the actor is in camera view
	FVector VectorToEnemy = (Enemy->GetActorLocation() - GetActorLocation()).GetSafeNormal();
	float dot = FVector::DotProduct(VectorToEnemy, CameraComp->GetForwardVector().GetSafeNormal());

	if (dot < 0.2) {
		return false;
	}

	//Check there are no obstacles between the camera and the enemy
	bool Visible = false;
	FVector EyeLocation = GetPawnViewLocation();
	FRotator EyeRotation = GetViewRotation();

	FVector TraceEnd = EyeLocation + (EyeRotation.Vector() * 100000);
	TraceEnd = Enemy->GetActorLocation() + FVector().UpVector * Enemy->GetDefaultHalfHeight() * 0.5f;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = true;

	FHitResult Hit;
	if (GetWorld()->LineTraceSingleByChannel(Hit, EyeLocation, TraceEnd, ECC_Visibility, QueryParams))
	{
		if (Hit.GetActor() == Enemy)
		{
			Visible = true;
		}
	}

	if (DebugDetectionDrawing > 0) {
		if (Visible) {
			DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::Red, false, 1.0f, 0, 0.5f);
		}
		else {
			DrawDebugLine(GetWorld(), EyeLocation, TraceEnd, FColor::White, false, 1.0f, 0, 0.5f);
		}
	}

	return Visible;
}


void ACSCharacter::OnDetectNearbyEnemies()
{
	FCollisionShape CollShape;
	CollShape.SetSphere(EnemyDetectionDistance);

	FCollisionObjectQueryParams QueryParams;
	QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
	QueryParams.AddObjectTypesToQuery(ECC_Pawn);

	TArray<FOverlapResult> Overlaps;
	GetWorld()->OverlapMultiByObjectType(Overlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollShape);

	MaxDistanceToEnemies = 0.0f;
	NearbyEnemies = 0;
	for (int i = 0; i < Overlaps.Num(); ++i)
	{
		//TODO: Change to enemy class
		ACharacter* Character = Cast<ACharacter>(Overlaps[i].GetActor());
		if (Character && Character != this)
		{
			NearbyEnemies++;
			FVector VectorToEnemy = Character->GetActorLocation() - GetActorLocation();
			float DistanceToEnemy = VectorToEnemy.Size();
			//float dot = FVector::DotProduct(GetActorForwardVector().GetSafeNormal(), VectorToEnemy.GetSafeNormal());

			if (DistanceToEnemy > MaxDistanceToEnemies /* && dot < 0.4*/)
			{
				//UE_LOG(LogTemp, Log, TEXT("Dot: %.2f"), dot);
				MaxDistanceToEnemies = DistanceToEnemy;
			}
		}
	}

	if (DebugDetectionDrawing > 0) 
	{
		if (NearbyEnemies > 0) 
		{
			DrawDebugSphere(GetWorld(), GetActorLocation(), EnemyDetectionDistance, 12, FColor::Red, false, 1.0f);
		}
		else {
			DrawDebugSphere(GetWorld(), GetActorLocation(), EnemyDetectionDistance, 12, FColor::White, false, 1.0f);
		}
	}
}


#pragma region Actions
void ACSCharacter::RequestAction(ActionType Type)
{
	ActionComp->RequestAction(Type);
}


void ACSCharacter::StartAction(ActionType type)
{
	LastState = CurrentState;

	switch (type)
	{
	case ActionType::ATTACK:
		CurrentState = CharacterState::ATTACKING;
		break;

	case ActionType::DODGE:
		CurrentState = CharacterState::DODGING;
		break;

	default:
		break;
	}

	ActionComp->StartAction(type);
}

void ACSCharacter::StopAction(ActionType type)
{
	CurrentState = CharacterState::DEFAULT;

	switch (type)
	{
	case ActionType::ATTACK:
		break;

	case ActionType::DODGE:
		
		break;

	default:
		break;
	}

	ActionComp->StopAction(type);

	if (TargetLocked)
	{
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
}
#pragma endregion

// Called every frame
void ACSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Blue, TEXT("%s", UENUM::>));

	AdjustCamera(DeltaTime);

	if (GenericDebugDraw > 0)
	{
		DrawDebugLine(GetWorld(), GetActorLocation() + FVector(0.0f, 0.0f, 60.0f), GetActorLocation() + FVector(0.0f, 0.0f, 120.0f) + GetActorForwardVector() * 100.0f, FColor::Blue, false, DeltaTime * 2.0f, 0, 1.0f);
	}
}

// Called to bind functionality to input
void ACSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACSCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &ACSCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ACSCharacter::LookUp);

	PlayerInputComponent->BindAxis("TurnRate", this, &ACSCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACSCharacter::LookUpAtRate);

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ACSCharacter::StartRunning);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &ACSCharacter::StopRunning);

	PlayerInputComponent->BindAction("LockTarget", IE_Pressed, this, &ACSCharacter::ToggleLockTarget);
	PlayerInputComponent->BindAction<ActionDelegate>("Attack", IE_Pressed, this, &ACSCharacter::RequestAction, ActionType::ATTACK);

	PlayerInputComponent->BindAction<ActionDelegate>("Dodge", IE_Pressed, this, &ACSCharacter::RequestAction, ActionType::DODGE);
}

FVector ACSCharacter::GetPawnViewLocation() const
{
	if (CameraComp) {
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

ACSWeapon* ACSCharacter::GetCurrentWeapon()
{
	return CurrentWeapon;
}

bool ACSCharacter::IsTargetLocked() const
{
	return TargetLocked;
}

