// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CSCameraManagerComponent.h"

#include "CSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Actions/CSCharacterState.h"

// Sets default values for this component's properties
UCSCameraManagerComponent::UCSCameraManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	ArmLengthInterpSpeed = 2.5f;
	MultipleEnemiesArmLength = 500.0f;

	SingleEnemySocketOffset = FVector(0.0f, 120.0f, 10.0f);
	MultipleEnemiesSocketOffset = FVector(0.0f, 110.0f, 50.0f);

	AimFOV = 110.0f;
}


// Called when the game starts
void UCSCameraManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	Character = Cast<ACSCharacter>(GetOwner());

	SpringArmComp = Character->SpringArmComp;
	CameraComp = Character->CameraComp;

	DefaultArmLength = SpringArmComp->TargetArmLength;
	DefaultSocketOffset = SpringArmComp->SocketOffset;
	DefaultFOV = CameraComp->FieldOfView;

	SingleEnemySocketOffset = FVector(0.0f, 120.0f, 10.0f);
	MultipleEnemiesSocketOffset = FVector(0.0f, 110.0f, 50.0f);

	AimFOV = 60.0f;
}


// Called every frame
void UCSCameraManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCSCameraManagerComponent::InterpolateLookToEnemy(ACharacter* LockedEnemy, int32 NearbyEnemies)
{
	FVector EnemyPosition = LockedEnemy->GetActorLocation();
	FRotator TargetBodyRotation = UKismetMathLibrary::FindLookAtRotation(Character->GetActorLocation(), EnemyPosition);

	bool DuelCombat = NearbyEnemies == 1 || (LockedEnemy && NearbyEnemies < 2);
	EnemyPosition.X -= DuelCombat ? CloseCameraAddition.X : 0.0f;
	EnemyPosition.Y -= CloseCameraAddition.Y;
	EnemyPosition.Z -= DuelCombat ? CloseCameraAddition.Z * 0.5f : CloseCameraAddition.Z;
	FRotator TargetViewRotation = UKismetMathLibrary::FindLookAtRotation(Character->GetActorLocation(), EnemyPosition);
	//TargetViewRotation.Roll = Character->GetActorRotation().Roll;

	if (Character->GetCharacterMovement()->bOrientRotationToMovement)
	{
		//For free run keep the character looking right at the enemy to avoid artifacts
		FRotator InterpolatedRotation = FMath::RInterpTo(Character->GetController()->GetControlRotation(), TargetViewRotation, GetWorld()->GetDeltaSeconds(), 20.0f);
		Character->GetController()->SetControlRotation(InterpolatedRotation);
	}
	else
	{
		//For locked walk
		FRotator InterpolatedRotation = FMath::RInterpTo(Character->GetController()->GetControlRotation(), TargetViewRotation, GetWorld()->GetDeltaSeconds(), 2.5);
		Character->GetController()->SetControlRotation(InterpolatedRotation);
		Character->SetActorRotation(TargetBodyRotation);
	}

	//Character->GetController()->SetControlRotation(GetLockedRotation(LockedEnemy));
}

FRotator UCSCameraManagerComponent::GetLockedRotation(ACharacter* LockedEnemy)
{
	FVector EnemyLocation = LockedEnemy->GetActorLocation();
	EnemyLocation.Z -= 200.0;

	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(Character->GetActorLocation(), EnemyLocation);

	FRotator ActorRotation = Character->GetActorRotation();
	FRotator InterpolatedRotation = UKismetMathLibrary::RInterpTo(ActorRotation, LookAtRotation, GetWorld()->GetDeltaSeconds(), LockingInterpolationSpeed);

	return FRotator(InterpolatedRotation.Pitch, InterpolatedRotation.Yaw, ActorRotation.Roll);
}

void UCSCameraManagerComponent::AdjustCamera(float DeltaTime, ACharacter* LockedEnemy, int32 NearbyEnemies)
{
	//Set as default values
	float InterpolationSpeed = 0.85f;
	float TargetFOV = CalculateDesiredFOV(LockedEnemy, NearbyEnemies);
	float TargetArmLength = CalculateDesiredArmLength(LockedEnemy, NearbyEnemies);
	FVector TargetOffset = CalculateDesiredSocketOffset(LockedEnemy, NearbyEnemies);


	if (LockedEnemy)
	{
		InterpolateLookToEnemy(LockedEnemy, NearbyEnemies);
	}

	//FOV
	float NewFOV = FMath::FInterpTo(CameraComp->FieldOfView, TargetFOV, DeltaTime, InterpolationSpeed * 4.5f);
	CameraComp->SetFieldOfView(NewFOV);

	//Socket
	FVector NewSocketOffset = FMath::Lerp(SpringArmComp->SocketOffset, TargetOffset, DeltaTime * InterpolationSpeed);
	SpringArmComp->SocketOffset = NewSocketOffset;

	//Arm Length
	float NewArmLength = FMath::FInterpTo(SpringArmComp->TargetArmLength, TargetArmLength, DeltaTime, InterpolationSpeed);
	SpringArmComp->TargetArmLength = NewArmLength;
}

float UCSCameraManagerComponent::CalculateDesiredFOV(ACharacter* LockedEnemy, int32 NearbyEnemies)
{
	if (Character->GetCurrentState() == CharacterStateType::AIM)
	{
		return AimFOV;
	}

	return DefaultFOV;
}

FVector UCSCameraManagerComponent::CalculateDesiredSocketOffset(ACharacter* LockedEnemy, int32 NearbyEnemies)
{
	if (Character->GetCurrentState() == CharacterStateType::AIM)
	{
		//Change for variable
		return SingleEnemySocketOffset + FVector(0.0f, -20.0f, 20.0f);
	}

	if (NearbyEnemies > 0)
	{
		if (NearbyEnemies > 1)
		{
			return MultipleEnemiesSocketOffset;
		}
		else if (LockedEnemy)
		{
			return SingleEnemySocketOffset;
		}
	}

	return DefaultSocketOffset;
}

float UCSCameraManagerComponent::CalculateDesiredArmLength(ACharacter* LockedEnemy, int32 NearbyEnemies)
{
	if (Character->GetCurrentState() == CharacterStateType::AIM)
	{
		return DefaultArmLength;
	}

	if (NearbyEnemies > 1)
	{
		return FMath::Clamp(Character->MaxDistanceToEnemies, DefaultArmLength, MultipleEnemiesArmLength);
	}

	return DefaultArmLength;
}
