// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSAction_Dodge.h"
#include "CSCharacter.h"
#include "GameFramework/SpringArmComponent.h"

UCSAction_Dodge::UCSAction_Dodge()
{
	Type = ActionType::DODGE;
}

void UCSAction_Dodge::StartAction()
{
	Super::StartAction();

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

void UCSAction_Dodge::UpdateAction(float DeltaTime)
{
	if (ActionRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to dodge"));
		ActionRequested = false;
	}
}

void UCSAction_Dodge::StopAction()
{
	Super::StopAction();

	Character->SpringArmComp->bEnableCameraLag = false;
}

FVector UCSAction_Dodge::CalculateDodgeDirection()
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
		direction = -FRotationMatrix(Yaw).GetUnitAxis(EAxis::X);
	}

	return direction;
}
