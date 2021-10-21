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

	CurrentState = CharacterState::DEFAULT;

	TurnRate = 45.0f;
	LookRate = 45.0f;

	IsRunning = false;

	WeaponAttachSocketName = "WeaponSocket";

	ArmLengthInterpSpeed = 2.5f;
	EnemyDetectionDistance = 600.0f;
	MultipleEnemiesArmLength = 500.0f;
	
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
}

void ACSCharacter::AdjustCamera(float DeltaTime)
{
	float TargetFOV = DefaultFOV;
	FVector TargetOffset = DefaultSocketOffset;
	if (TargetLocked && LockedEnemy != nullptr)
	{
		InterpolateLookToEnemy();
		if (!IsRunning && NearbyEnemies < 2)
		{
			TargetFOV = LockedFOV;
			TargetOffset = FVector(0.0f, 75.0f, 0.0f);
		}
	}

	float NewFOV = FMath::FInterpTo(CameraComp->FieldOfView, TargetFOV, DeltaTime, 5.0f);
	CameraComp->SetFieldOfView(NewFOV);

	float TargetArmLength = DefaultArmLength;

	if (NearbyEnemies > 1)
	{
		//TargetOffset = MultipleEnemiesSocketOffset;
		//TargetArmLenght = MultipleEnemiesArmLength;
		TargetArmLength = FMath::Clamp(MaxDistanceToEnemies, DefaultArmLength, MultipleEnemiesArmLength);
	}


	float NewArmLength = FMath::FInterpTo(SpringArmComp->TargetArmLength, TargetArmLength, DeltaTime, ArmLengthInterpSpeed);
	FVector NewSocketOffset = FMath::Lerp(SpringArmComp->SocketOffset, TargetOffset, DeltaTime * 5.0f);

	SpringArmComp->TargetArmLength = NewArmLength;
	SpringArmComp->SocketOffset = NewSocketOffset;
}

void ACSCharacter::MoveForward(float Value)
{
	if (CurrentState == CharacterState::ATTACKING) {
		return;
	}

	if (Controller != nullptr && Value != 0.0f)
	{
		//AddMovementInput(GetActorForwardVector() * Value);
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);
		const FVector direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X);

		AddMovementInput(direction, Value);
	}
}

void ACSCharacter::MoveRight(float Value)
{
	if (CurrentState == CharacterState::ATTACKING) {
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

void ACSCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * GetWorld()->GetDeltaSeconds() * TurnRate);
}

void ACSCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * GetWorld()->GetDeltaSeconds() * LookRate);
}

void ACSCharacter::StartRunning()
{
	IsRunning = true;
	GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

void ACSCharacter::StopRunning()
{
	IsRunning = false;
	GetCharacterMovement()->MaxWalkSpeed = JogSpeed;

	if (TargetLocked) {
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
}

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
	TArray<AActor*> FoundCharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

	//Find closest enemy
	float ClosestEnemyDistance = 100000000000.0f;
	ACharacter* ClosestEnemy = nullptr;
	for (size_t i = 0; i < FoundCharacters.Num(); i++)
	{
		if (FoundCharacters[i] == this)
			continue;

		float distance = FVector::Distance(GetActorLocation(), FoundCharacters[i]->GetActorLocation());
		if (distance < ClosestEnemyDistance)
		{
			ClosestEnemyDistance = distance;
			ClosestEnemy = Cast<ACharacter>(FoundCharacters[i]);
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

void ACSCharacter::InterpolateLookToEnemy()
{
	//UE_LOG(LogTemp, Warning, TEXT("Locking"));
	FVector direction = LockedEnemy->GetActorLocation() - GetActorLocation();
	FRotator TargetRotation = UKismetMathLibrary::MakeRotFromXZ(direction, FVector::UpVector);

	float dot = FVector::DotProduct(CameraComp->GetForwardVector(), direction.GetSafeNormal());
	//if(dot != 1.0f)
		//UE_LOG(LogTemp, Warning, TEXT("Dot: %f"), dot);

	FRotator InterpolatedRotation = FMath::RInterpTo(CameraComp->GetComponentRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), 5.0f);

	if (IsRunning)
	{
		//For free run keep the character looking right at the enemy to avoid artifacts
		GetController()->SetControlRotation(TargetRotation);
	}
	else
	{
		//For locked walk
		SetActorRotation(InterpolatedRotation);
		GetController()->SetControlRotation(InterpolatedRotation);
	}
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
			float DistanceToEnemy = (Character->GetActorLocation() - GetActorLocation()).Size();

			if (DistanceToEnemy > MaxDistanceToEnemies)
			{
				MaxDistanceToEnemies = DistanceToEnemy;
			}
		}
	}

	if (NearbyEnemies > 0)
	{
		//UE_LOG(LogTemp, Log, TEXT("Enemies: %i"), NrOfEnemies);
		//DrawDebugSphere(GetWorld(), GetActorLocation(), EnemyDetectionDistance, 12, FColor::Red, false, 1.0f);
	}
	else
	{
		//DrawDebugSphere(GetWorld(), GetActorLocation(), EnemyDetectionDistance, 12, FColor::White, false, 1.0f);
	}
}


void ACSCharacter::RequestAction(ActionType type)
{
	UE_LOG(LogTemp, Warning, TEXT("Action Requested"));
}


void ACSCharacter::StartAction(ActionType type)
{
	switch (type)
	{
	case ActionType::ATTACK:
		CurrentState = CharacterState::ATTACKING;
		StartAttacking();
		break;

	case ActionType::EVADE:
		StartDodge();
		break;

	default:
		break;
	}
}

void ACSCharacter::StopAction(ActionType type)
{
	switch (type)
	{
	case ActionType::ATTACK:
		StopAttacking();
		break;

	case ActionType::EVADE:
		break;

	default:
		break;
	}
}

//Public functions

void ACSCharacter::RequestAttack()
{
	WantsToAttack = true;
	FTimerHandle TimerHandle_Attack;
	GetWorldTimerManager().SetTimer(TimerHandle_Attack, this, &ACSCharacter::StopAttacking, ActionsRequestTime, false);
}

void ACSCharacter::StartAttacking()
{
	GetCharacterMovement()->DisableMovement();
	WantsToAttack = false;
}

void ACSCharacter::StopAttacking()
{
	GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
	CurrentState = CharacterState::DEFAULT;
	WantsToAttack = false;
}

void ACSCharacter::RequestDodge()
{
	WantsToDodge = true;

	FTimerHandle TimerHandle_Dodge;
	GetWorldTimerManager().SetTimer(TimerHandle_Dodge, this, &ACSCharacter::DeleteDodgeRequest, ActionsRequestTime, false);
}

void ACSCharacter::DeleteDodgeRequest()
{
	WantsToDodge = false;
}

void ACSCharacter::StartDodge()
{
	WantsToDodge = false;

	FVector direction;
	const FRotator Rotation = Controller->GetControlRotation();
	const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);

	//If the player wants to move in a certain direction, dodge to ot
	if (GetInputAxisValue("MoveForward") != 0.0f || GetInputAxisValue("MoveRight") != 0.0f)
	{
		FVector forwardDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X) * GetInputAxisValue("MoveForward");
		FVector rightDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y) * GetInputAxisValue("MoveRight");

		direction = forwardDirection + rightDirection;
	}
	//if not, dodge backwards
	else
	{
		direction = -FRotationMatrix(Yaw).GetUnitAxis(EAxis::X);
	}

	LaunchCharacter(FVector(0.0f, 0.0f, 400.0f), true, true);
	LaunchCharacter(direction * DodgeSpeed, true, true);

	IsDodging = true;

	SpringArmComp->bEnableCameraLag = true;

	//GetCharacterMovement()->AddForce(direction * DodgeSpeed);
}

// Called every frame
void ACSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AdjustCamera(DeltaTime);
}

// Called to bind functionality to input
void ACSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACSCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &ACSCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ACSCharacter::AddControllerYawInput);

	PlayerInputComponent->BindAxis("LookUpRate", this, &ACSCharacter::LookUpAtRate);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACSCharacter::TurnAtRate);

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &ACSCharacter::StartRunning);
	PlayerInputComponent->BindAction("Run", IE_Released, this, &ACSCharacter::StopRunning);

	PlayerInputComponent->BindAction("LockTarget", IE_Pressed, this, &ACSCharacter::ToggleLockTarget);
	PlayerInputComponent->BindAction("Attack", IE_Pressed, this, &ACSCharacter::RequestAttack);

	PlayerInputComponent->BindAction("Dodge", IE_Pressed, this, &ACSCharacter::RequestDodge);
}

ACSWeapon* ACSCharacter::GetCurrentWeapon()
{
	return CurrentWeapon;
}

