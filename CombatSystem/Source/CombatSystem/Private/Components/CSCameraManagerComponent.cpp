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

	MultipleEnemiesSocketOffset = FVector(0.0f, 0, 50.0f);
	AimSocketOffset = FVector(0.0f, 100.0f, 35.0f);

	CloseCameraAddition = FVector(100.0f, 0.0f, 50.0f);

	AimFOV = 60.0f;

	TurnSpeed = 1.0f;
	LookUpSpeed = 1.0f;

	AimTurnSpeed = 0.4f;
	AimLookUpSpeed = 0.4f;

	MultipleEnemiesArmLengthMargin = 50.0f;

	//CameraShakes = TMap<CSCameraShakeType, TSubclassOf<UCameraShakeBase>>();
}


// Called when the game starts
void UCSCameraManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	DefaultTurnSpeed = TurnSpeed;
	DefaultLookUpSpeed = LookUpSpeed;

	Character = Cast<ACSCharacter>(GetOwner());

	SpringArmComp = Character->SpringArmComp;
	CameraComp = Character->CameraComp;

	DefaultArmLength = SpringArmComp->TargetArmLength;
	DefaultSocketOffset = SpringArmComp->SocketOffset;
	DefaultFOV = CameraComp->FieldOfView;

	//MultipleEnemiesSocketOffset = FVector(0.0f, 110.0f, 80.0f);
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
	EnemyPosition.Z -= CloseCameraAddition.Z;

	/*
	bool DuelCombat = NearbyEnemies == 1 || (LockedEnemy && NearbyEnemies < 2);
	EnemyPosition.X -= DuelCombat ? CloseCameraAddition.X : 0.0f;
	EnemyPosition.Y -= CloseCameraAddition.Y;
	EnemyPosition.Z -= DuelCombat ? CloseCameraAddition.Z * 0.5f : CloseCameraAddition.Z;
	*/
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
		TargetBodyRotation.Pitch = 0.0f;
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
	FVector TargetOffset =  CalculateDesiredSocketOffset(LockedEnemy, NearbyEnemies);

	if (LockedEnemy)
	{
		InterpolateLookToEnemy(LockedEnemy, NearbyEnemies);
	}
	else
	{
		//DrawDebugLine(GetWorld(), Character->GetActorLocation(), Character->GetActorLocation() + Character->GetControlRotation().GetNormalized().Vector() * 500.0f, FColor::Red,
			//false, GetWorld()->DeltaTimeSeconds * 1.5f, 0u, 5.0f);
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

float UCSCameraManagerComponent::GetLookUpSpeed() const
{
	return LookUpSpeed;
}

float UCSCameraManagerComponent::GetDefaultLookUpSpeed() const
{
	return DefaultLookUpSpeed;
}

void UCSCameraManagerComponent::SetLookUpSpeed(float NewLookUpSpeed)
{
	LookUpSpeed = NewLookUpSpeed;
}

float UCSCameraManagerComponent::GetTurnSpeed() const
{
	return TurnSpeed;
}

float UCSCameraManagerComponent::GetDefaultTurnSpeed() const
{
	return DefaultTurnSpeed;
}

void UCSCameraManagerComponent::SetTurnSpeed(float NewTurnSpeed)
{
	TurnSpeed = NewTurnSpeed;
}

void UCSCameraManagerComponent::PlayCameraShake(TSubclassOf<UCameraShakeBase> CameraShake, float scale)
{
	if (!Character->IsPlayerControlled())
	{
		return;
	}

	GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(CameraShake, scale);
}

void UCSCameraManagerComponent::StopCameraShake(TSubclassOf<UCameraShakeBase> CameraShake, bool StopImmediately)
{
	if (!Character->IsPlayerControlled())
	{
		return;
	}

	GetWorld()->GetFirstPlayerController()->ClientStopCameraShake(CameraShake, StopImmediately);
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
		return AimSocketOffset;
	}

	if (NearbyEnemies > 0 || LockedEnemy)
	{
		//float SocketOffsetZ = FMath::Clamp(MultipleEnemiesSocketOffset.Z * NearbyEnemies / 4.0f, DefaultSocketOffset.Z, MultipleEnemiesSocketOffset.Z);
		float SocketOffsetZ = FMath::Clamp(MultipleEnemiesSocketOffset.Z, DefaultSocketOffset.Z, MultipleEnemiesSocketOffset.Z);
		return FVector(MultipleEnemiesSocketOffset.X, MultipleEnemiesSocketOffset.Y, SocketOffsetZ);
	}

	return DefaultSocketOffset;
}

float UCSCameraManagerComponent::CalculateDesiredArmLength(ACharacter* LockedEnemy, int32 NearbyEnemies)
{
	if (Character->GetCurrentState() == CharacterStateType::AIM || NearbyEnemies == 0)
	{
		return DefaultArmLength;
	}

	//return FMath::Clamp(Character->MaxDistanceToEnemies + (MultipleEnemiesArmLengthMargin * 4.0f / NearbyEnemies), DefaultArmLength, MultipleEnemiesArmLength);
	return FMath::Clamp(Character->MaxDistanceToEnemies, DefaultArmLength, MultipleEnemiesArmLength);
}
