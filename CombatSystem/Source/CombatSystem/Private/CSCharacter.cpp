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
#include "CSShield.h"
#include "Actions/CSCharacterState.h"
#include "Components/CSActionComponent.h"
#include "Components/CSHealthComponent.h"
#include "Components/CSCameraManagerComponent.h"

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

	HealthComp = CreateDefaultSubobject<UCSHealthComponent>(TEXT("HealthComp"));
	CameraManagerComp = CreateDefaultSubobject<UCSCameraManagerComponent>(TEXT("CameraManagerComp"));

	AcceptUserInput = true;

	TurnRate = 45.0f;
	LookRate = 45.0f;

	WeaponAttachSocketName = "WeaponSocket";
	ShieldAttachSocketName = "ShieldSocket";

	EnemyDetectionDistance = 600.0f;

	//Target Locking
	TimeBetweenEnemyChange = 0.4f;
	CanChangeLockedEnemy = true;

	NearbyEnemies;
	MaxDistanceToEnemies = 0.0f;

	IsRunning = false;
}

// Called when the game starts or when spawned
void ACSCharacter::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->MaxWalkSpeed = JogSpeed;

	//Weapon setup
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	CurrentWeapon = GetWorld()->SpawnActor<ACSWeapon>(StarterWeaponClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	if (CurrentWeapon)
	{
		CurrentWeapon->SetOwner(this);
		CurrentWeapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, WeaponAttachSocketName);
	}

	//Shield setup

	CurrentShield = GetWorld()->SpawnActor<ACSShield>(StarterShieldClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
	if (CurrentShield)
	{
		CurrentShield->SetOwner(this);
		CurrentShield->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, ShieldAttachSocketName);
	}

	//Check for enemies every certainm time
	if (IsPlayerControlled())
	{
		FTimerHandle TimerHandle_CheckNearbyEnemies;
		GetWorldTimerManager().SetTimer(TimerHandle_CheckNearbyEnemies, this, &ACSCharacter::OnDetectNearbyEnemies, 0.5f, true);
	}

	HealthComp->OnHealthChanged.AddDynamic(this, &ACSCharacter::OnHealthChanged);

	//States setup
	for (TSubclassOf<UCSCharacterState> StateClass : DefaultStates)
	{
		AddState(StateClass);
	}

	if (States.Contains(CharacterStateType::DEFAULT))
	{
		CurrentState = LastState = CharacterStateType::DEFAULT;
	}
}

void ACSCharacter::MoveForward(float Value)
{
	if (!AcceptUserInput) {
		return;
	}

	if (Controller != nullptr && Value != 0.0f)
	{
		FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACSCharacter::MoveRight(float Value)
{
	if (!AcceptUserInput) {
		return;
	}

	if (Controller != nullptr && Value != 0.0f)
	{
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
	IsRunning = true;
	GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	//bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void ACSCharacter::StopRunning()
{
	IsRunning = false;
	GetCharacterMovement()->MaxWalkSpeed = JogSpeed;

	if (TargetLocked)
	{
		//bUseControllerRotationYaw = true;
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
}

void ACSCharacter::OnHealthChanged(UCSHealthComponent* HealthComponent, float CurrentHealth, float HealthDelta,
	const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Log, TEXT("Current health: %.2f"), CurrentHealth);

	if (CurrentHealth <= 0.0f)
	{
		TargetLocked = false;
		LockedEnemy = nullptr;

		ACSCharacter* DamagerCharacter = Cast<ACSCharacter>(DamageCauser->GetOwner());
		if (DamagerCharacter)
		{
			DamagerCharacter->OnEnemyDead(this);
		}

		ChangeState(CharacterStateType::DEAD);
	}
	else
	{
		ChangeState(CharacterStateType::HIT);
	}
}

#pragma region Target Locking
void ACSCharacter::ToggleLockTarget()
{
	if (CurrentState == CharacterStateType::DEAD)
	{
		return;
	}

	//Start targeting target
	if (!TargetLocked)
	{
		if (LockTarget())
		{
			TargetLocked = true;
			//bUseControllerRotationYaw = true;
			GetCharacterMovement()->bOrientRotationToMovement = false;
			LockedEnemy->OnSetAsTarget(true);
		}
	}
	else
	{
		TargetLocked = false;
		//bUseControllerRotationYaw = false;
		GetCharacterMovement()->bOrientRotationToMovement = true;

		if (LockedEnemy != nullptr)
		{
			LockedEnemy->OnSetAsTarget(false);
			LockedEnemy = nullptr;
		}
	}
}

bool ACSCharacter::LockTarget()
{

	//TODO: Change this for enemy class
	TArray<ACSCharacter*> FoundCharacters = GetAllVisibleEnemies(EnemyDetectionDistance * 2.0f);
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

	//Find closest enemy
	float ClosestEnemyDistance = 100000000000.0f;
	float MaximumDot = 0.35f;
	ACSCharacter* ClosestEnemy = nullptr;
	for (size_t i = 0; i < FoundCharacters.Num(); i++)
	{
		if (FoundCharacters[i] == this)
			continue;

		FVector VectorToEnemy = FoundCharacters[i]->GetActorLocation() - GetActorLocation();
		float Dot = FVector::DotProduct(VectorToEnemy.GetSafeNormal(), CameraComp->GetForwardVector().GetSafeNormal());
		float distance = FVector::Distance(GetActorLocation(), FoundCharacters[i]->GetActorLocation());

		if (Dot > MaximumDot /* && distance < ClosestEnemyDistance || distance < EnemyDetectionDistance * 0.75f*/)
		{
			ClosestEnemyDistance = distance;
			MaximumDot = Dot;
			ClosestEnemy = FoundCharacters[i];
			//UE_LOG(LogTemp, Log, TEXT("Dot: %.2f"), Dot);
		}
	}

	//If there is an enemy in range lock it
	if (ClosestEnemy)
	{
		LockedEnemy = ClosestEnemy;
		return true;
		//UE_LOG(LogTemp, Warning, TEXT("Target Locked: %s"), *LockedEnemy->GetName());
	}
	//If not, stay unlocked
	else
	{
		return false;
	}
}


void ACSCharacter::ChangeLockedTarget(float Direction)
{
	if (LockedEnemy == nullptr) {
		return;
	}

	//TODO: Change this for enemy class
	TArray<ACSCharacter*> FoundCharacters = GetAllVisibleEnemies(EnemyDetectionDistance * 2.0f);
	//UE_LOG(LogTemp, Log, TEXT("Enemies: %i"), FoundCharacters.Num());
	ACSCharacter* ClosestEnemy = nullptr;

	/*
	float RotationDifference = VectorToEnemy.ToOrientationRotator().Yaw - CameraComp->GetForwardVector().ToOrientationRotator().Yaw;
	DrawDebugString(GetWorld(), FoundCharacters[i]->GetActorLocation(), FString::SanitizeFloat(RotationDifference), 0, FColor::Yellow, 2.0f);
	*/

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
		if (LockedEnemy != nullptr)
		{
			LockedEnemy->OnSetAsTarget(false);
		}

		LockedEnemy = Cast<ACSCharacter>(ClosestEnemy);
		LockedEnemy->OnSetAsTarget(true);

		CanChangeLockedEnemy = false;
		FTimerHandle TimerHandle_LockedEnemyChange;
		GetWorldTimerManager().SetTimer(TimerHandle_LockedEnemyChange, this, &ACSCharacter::EnableLockedEnemyChange, TimeBetweenEnemyChange, false);
	}
}

void ACSCharacter::EnableLockedEnemyChange()
{
	CanChangeLockedEnemy = true;
}
#pragma endregion

TArray<ACSCharacter*> ACSCharacter::GetAllVisibleEnemies(float Radius)
{
	TArray<ACSCharacter*> VisibleEnemies;

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
		ACSCharacter* Character = Cast<ACSCharacter>(Overlaps[i].GetActor());
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

bool ACSCharacter::IsEnemyVisible(ACSCharacter* Enemy)
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
	NearbyEnemies.Empty();

	for (int i = 0; i < Overlaps.Num(); ++i)
	{
		ACharacter* Character = Cast<ACharacter>(Overlaps[i].GetActor());
		if (Character && Character != this)
		{
			NearbyEnemies.Add(Character);
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
		if (NearbyEnemies.Num() > 0)
		{
			DrawDebugSphere(GetWorld(), GetActorLocation(), EnemyDetectionDistance, 12, FColor::Red, false, 1.0f);
		}
		else {
			DrawDebugSphere(GetWorld(), GetActorLocation(), EnemyDetectionDistance, 12, FColor::White, false, 1.0f);
		}
	}
}


#pragma region Actions
void ACSCharacter::AddState(TSubclassOf<UCSCharacterState> StateClass)
{
	if (!ensure(StateClass))
	{
		return;
	}

	UCSCharacterState* StateAction = NewObject<UCSCharacterState>(this, StateClass);
	if (StateAction)
	{
		StateAction->Init(this, RequestTime);
		States.Add(StateAction->StateType, StateAction);
	}
}


void ACSCharacter::RequestState(CharacterStateType Type)
{
	if (States.Contains(Type))
	{
		if (States[Type] != nullptr)
		{
			States[Type]->RequestState();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Trying to request an action which has not been added yet or couldn't be added properly, please add it in the constructor or check for errors"));
		}
	}
}

void ACSCharacter::RequestStateAndSubstate(CharacterStateType StateType, uint8 SubstateType)
{
	if (States.Contains(StateType))
	{
		States[StateType]->RequestState(SubstateType);
	}
}

CharacterStateType ACSCharacter::GetCurrentState() const
{
	return CurrentState;
}

bool ACSCharacter::IsStateRequested(CharacterStateType Type)
{
	if (States.Contains(Type))
	{
		return States[Type]->StateRequested;
	}
	else
	{
		return false;
	}
}

UCSCharacterState* ACSCharacter::GetCharacterState(CharacterStateType StateType)
{
	if (States.Contains(StateType))
	{
		return States[StateType];
	}

	return nullptr;
}

ACSCharacter* ACSCharacter::GetLockedTarget() const
{
	return LockedEnemy;
}

void ACSCharacter::ChangeState(CharacterStateType NewState, uint8 NewSubstate)
{
	if (States.Contains(CurrentState))
	{
		States[CurrentState]->ExitState();
	}
	LastState = CurrentState;

	if (States.Contains(NewState))
	{
		States[NewState]->EnterState(NewSubstate);
	}
	CurrentState = NewState;
}

uint8 ACSCharacter::GetCurrentSubstate() const
{
	return States[CurrentState]->SubstateType;
}

float ACSCharacter::GetStateRequestElapsedTime(CharacterStateType Type) const
{
	if (States.Contains(Type))
	{
		return States[Type]->GetRequestElapsedTime();
	}
	else
	{
		//Huge value, imposible for a request time
		return 1000.0f;
	}
}

void ACSCharacter::SetParriable(bool NewParriable)
{
	Parriable = NewParriable;
}

bool ACSCharacter::IsParriable() const
{
	return Parriable;
}

void ACSCharacter::OnEnemyDead(ACSCharacter* DeadCharacter)
{
	if (LockedEnemy == DeadCharacter)
	{
		ToggleLockTarget();
	}
}

bool ACSCharacter::IsFacingActor(AActor* OtherActor)
{
	float RotationDifference = OtherActor->GetActorRotation().Yaw - GetActorRotation().Yaw;
	return RotationDifference > 150.0f || RotationDifference < -150.0f;
}

TArray<ACharacter*> ACSCharacter::GetNearbyEnemies() const
{
	return NearbyEnemies;
}

void ACSCharacter::OnAnimationEnded(CharacterStateType FinishedAnimationState)
{
	if (States.Contains(FinishedAnimationState))
	{
		States[FinishedAnimationState]->OnAnimationEnded();
	}
}
void ACSCharacter::OnAnimationNotify(CharacterStateType StateType, FString AnimationNotifyName)
{
	if (States.Contains(StateType))
	{
		States[StateType]->OnAnimationNotify(AnimationNotifyName);
	}
}
#pragma endregion

// Called every frame
void ACSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Blue, TEXT("%s", UENUM::>));

	CameraManagerComp->AdjustCamera(DeltaTime, LockedEnemy, NearbyEnemies.Num());

	if (States.Contains(CurrentState))
	{
		States[CurrentState]->UpdateState(DeltaTime);
	}

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

	PlayerInputComponent->BindAction<CSStateDelegate>("Attack", IE_Pressed, this, &ACSCharacter::RequestState, CharacterStateType::ATTACK);
	PlayerInputComponent->BindAction<CSStateDelegate>("Dodge",  IE_Pressed, this, &ACSCharacter::RequestState, CharacterStateType::DODGE);

	PlayerInputComponent->BindAction<CSStateDelegate>("Block", IE_Pressed, this, &ACSCharacter::RequestState, CharacterStateType::BLOCK);
	PlayerInputComponent->BindAction<CSStateDelegate>("Block", IE_Released, this, &ACSCharacter::RequestState, CharacterStateType::DEFAULT);

	PlayerInputComponent->BindAction<CSStateDelegate>("Parry", IE_Pressed, this, &ACSCharacter::RequestState, CharacterStateType::PARRY);
	PlayerInputComponent->BindAction<CSStateDelegate>("Kick",  IE_Pressed, this, &ACSCharacter::RequestState, CharacterStateType::KICK);
}

void ACSCharacter::SetAcceptUserInput(bool NewAcceptUserInput)
{
	AcceptUserInput = NewAcceptUserInput;
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



