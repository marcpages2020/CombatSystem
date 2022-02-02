// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Dodge.h"
#include "CSCharacter.h"
#include "GameFramework/SpringArmComponent.h"

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

	//Launch the character in the desired direction
	FVector direction = CalculateDodgeDirection();
	Character->LaunchCharacter(FVector(0.0f, 0.0f, 400.0f), true, true);
	Character->LaunchCharacter(direction * DodgeSpeed, true, true);

	Character->SpringArmComp->bEnableCameraLag = true;
}

void UCSCharacterState_Dodge::UpdateState(float DeltaTime)
{
	if (StateRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to dodge"));
		StateRequested = false;
	}
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

	//If the player wants to move in a certain direction, dodge to ot
	if (Character->GetInputAxisValue("MoveForward") != 0.0f || Character->GetInputAxisValue("MoveRight") != 0.0f)
	{
		FVector forwardDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X) * Character->GetInputAxisValue("MoveForward");
		FVector rightDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y) * Character->GetInputAxisValue("MoveRight");

		direction = forwardDirection + rightDirection;
	}
	//if not, dodge backwards
	else
	{
		direction = -Character->GetActorForwardVector();
	}

	return direction;
}
