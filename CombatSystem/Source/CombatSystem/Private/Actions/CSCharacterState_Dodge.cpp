// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Dodge.h"

#include "CSCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

UCSCharacterState_Dodge::UCSCharacterState_Dodge()
{
	Type = CharacterStateType::DODGE;
}

void UCSCharacterState_Dodge::EnterState()
{
	Super::EnterState();

	if (Character == nullptr)
	{
		return;
	}

	//Calculate the direction to dodge
	//DodgeDestination = Character->GetActorLocation() + CalculateDodgeDirection().GetSafeNormal() * DodgeDistance;

	Character->LaunchCharacter(FVector(0.0f, 0.0f, 400.0f), true, true);
	Character->LaunchCharacter(CalculateDodgeDirection().GetSafeNormal() * DodgeSpeed, true, true);

	//Character->SpringArmComp->bEnableCameraLag = true;
}

void UCSCharacterState_Dodge::UpdateState(float DeltaTime)
{
	if (StateRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to dodge"));
		StateRequested = false;
	}

	//Character->SetActorLocation(FMath::Lerp(Character->GetActorLocation(), DodgeDestination, DeltaTime * DodgeSpeed));
}

void UCSCharacterState_Dodge::ExitState()
{
	Super::ExitState();

	Character->SpringArmComp->bEnableCameraLag = false;
}

void UCSCharacterState_Dodge::OnAnimationEnded()
{
	Character->ChangeState(CharacterStateType::DEFAULT);
}

FVector UCSCharacterState_Dodge::CalculateDodgeDirection()
{
	FVector direction;
	const FRotator Rotation = Character->Controller->GetControlRotation();
	const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);

	float Forward = Character->GetInputAxisValue("MoveForward");
	float Right = Character->GetInputAxisValue("MoveRight");

	//If the player wants to move in a certain direction, dodge to ot
	if (Forward == 0.0f && Right == 0.0f)
	{
		Forward = -1.0f;
	}

	FVector forwardDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X) * Forward;
	FVector rightDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y) * Right;

	direction = forwardDirection + rightDirection;

	return direction;
}
