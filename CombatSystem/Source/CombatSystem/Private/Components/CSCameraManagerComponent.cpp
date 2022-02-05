// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CSCameraManagerComponent.h"

#include "CSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UCSCameraManagerComponent::UCSCameraManagerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	ArmLengthInterpSpeed = 2.5f;
	MultipleEnemiesArmLength = 500.0f;
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
}


// Called every frame
void UCSCameraManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCSCameraManagerComponent::InterpolateLookToEnemy(ACharacter* LockedEnemy)
{
	//FVector direction = (LockedEnemy->GetActorLocation() - CameraComp->GetComponentLocation()).GetSafeNormal();
	FVector direction = (LockedEnemy->GetActorLocation() - Character->GetActorLocation()).GetSafeNormal();
	FRotator TargetRotation = UKismetMathLibrary::MakeRotFromXZ(direction, FVector::UpVector);

	if (Character->GetCharacterMovement()->bOrientRotationToMovement)
	{
		//For free run keep the character looking right at the enemy to avoid artifacts
		FRotator InterpolatedRotation = FMath::RInterpTo(Character->GetController()->GetControlRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), 20.0f);
		Character->GetController()->SetControlRotation(InterpolatedRotation);
	}
	else
	{
		//For locked walk
		FRotator InterpolatedRotation = FMath::RInterpTo(Character->GetController()->GetControlRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), 5.0f);
		Character->SetActorRotation(InterpolatedRotation);
		Character->GetController()->SetControlRotation(InterpolatedRotation);
	}
}

void UCSCameraManagerComponent::AdjustCamera(float DeltaTime, ACharacter* LockedEnemy, int32 NearbyEnemies)
{
	//Set as default values
	float TargetFOV = DefaultFOV;
	float InterpolationSpeed = ArmLengthInterpSpeed;
	float TargetArmLength = DefaultArmLength;
	FVector TargetOffset = DefaultSocketOffset;

	if (LockedEnemy)
	{
		InterpolateLookToEnemy(LockedEnemy);
	}

	if (NearbyEnemies > 0)
	{
		TargetOffset = MultipleEnemiesSocketOffset;

		if (NearbyEnemies > 1)
		{
			TargetArmLength = FMath::Clamp(Character->MaxDistanceToEnemies, DefaultArmLength, MultipleEnemiesArmLength);
		}
		else
		{
			TargetOffset.Z *= LockedEnemy ? 0.5f : 0.15f;
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
