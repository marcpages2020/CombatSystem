// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Dodge.h"

#include "CSCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CSCameraManagerComponent.h"

UCSCharacterState_Dodge::UCSCharacterState_Dodge() : UCSCharacterState()
{
	StateType = CharacterStateType::DODGE;
}

void UCSCharacterState_Dodge::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->SetAcceptUserInput(false);

	//Calculate the direction to dodge
	//DodgeDestination = Character->GetActorLocation() + CalculateDodgeDirection().GetSafeNormal() * DodgeDistance;

	DodgeDirection = CalculateDodgeDirection().GetSafeNormal();

	if (Character->IsRunning || !Character->IsTargetLocked())
	{
		SubstateType = (uint8)CharacterSubstateType_Dodge::ROLL_DODGE;
	}
	else
	{
		SubstateType = (uint8)CharacterSubstateType_Dodge::DEFAULT_DODGE;

		Character->LaunchCharacter(FVector(0.0f, 0.0f, 400.0f), true, true);
		Character->LaunchCharacter(DodgeDirection * StrafeDodgeSpeed, true, true);
		
		Character->GetCameraManager()->PlayCameraShake(DodgeShake, 0.5f);
	}

	Character->PlayForceFeedback(DodgeForceFeedback);
	

	//Character->SpringArmComp->bEnableCameraLag = true;
}

void UCSCharacterState_Dodge::UpdateState(float DeltaTime)
{
	if (StateRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to dodge"));
		StateRequested = false;
	}

	switch (SubstateType)
	{
	case (uint8)CharacterSubstateType_Dodge::DEFAULT_DODGE:
		//Character->AddMovementInput(DodgeDirection, DefaultRollAdditiveSpeed);
		break;

	case (uint8)CharacterSubstateType_Dodge::ROLL_DODGE:
		if (!Character->GetCharacterMovement()->bOrientRotationToMovement)
		{
			Character->GetCharacterMovement()->bOrientRotationToMovement = true;
		}

		Character->AddMovementInput(DodgeDirection, RollSpeed);
		break;

	default:
		break;
	}

	//Character->SetActorLocation(FMath::Lerp(Character->GetActorLocation(), DodgeDestination, DeltaTime * DodgeSpeed));
}

void UCSCharacterState_Dodge::ExitState()
{
	Super::ExitState();

	Character->SetAcceptUserInput(true);

	if (SubstateType == (uint8)CharacterSubstateType_Dodge::ROLL_DODGE && Character->IsTargetLocked() && !Character->IsRunning)
	{
		Character->GetCharacterMovement()->bOrientRotationToMovement = false;
	}

	//Character->SpringArmComp->bEnableCameraLag = false;
}

void UCSCharacterState_Dodge::OnAnimationEnded()
{
	if (Character->IsStateRequested(CharacterStateType::ATTACK))
	{
		Character->ChangeState(CharacterStateType::ATTACK);
	}
	else
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
}

FVector UCSCharacterState_Dodge::CalculateDodgeDirection()
{
	FVector direction;
	const FRotator Rotation = Character->Controller->GetControlRotation();
	const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);

	float Forward = Character->GetInputAxisValue("MoveForward");
	float Right = Character->GetInputAxisValue("MoveRight");

	//If the player wants to move in a certain direction, dodge in that direction
	if (Forward < 0.1f && Right < 0.1f)
	{
		Forward = Character->IsTargetLocked() ? -1.0f : 1.0f;
	}

	FVector forwardDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X) * Forward;
	FVector rightDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y) * Right;

	direction = forwardDirection + rightDirection;

	return direction;
}
