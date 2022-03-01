// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Aim.h"
#include "CSCharacter.h"

UCSCharacterState_Aim::UCSCharacterState_Aim()
{
	StateType = CharacterStateType::AIM;
}

void UCSCharacterState_Aim::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	SubstateType = (uint8)CharacterSubstateType_Aim::IDLE_AIM;
}

void UCSCharacterState_Aim::UpdateState(float DeltaTime)
{
	if (Character->IsStateRequested(CharacterStateType::DEFAULT))
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
}

void UCSCharacterState_Aim::ExitState()
{
}

void UCSCharacterState_Aim::OnAction(FString ActionName, EInputEvent KeyEvent)
{
	if (ActionName == "Shoot")
	{
		if (SubstateType == (uint8)CharacterSubstateType_Aim::IDLE_AIM && KeyEvent == IE_Pressed)
		{
			SubstateType = (uint8)CharacterSubstateType_Aim::RECOIL_AIM;
		}
		else if (SubstateType == (uint8)CharacterSubstateType_Aim::RECOIL_AIM && KeyEvent == IE_Released)
		{
			SubstateType = (uint8)CharacterSubstateType_Aim::SHOOT_AIM;
		}
	}
}

void UCSCharacterState_Aim::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "ShootEnd")
	{
		SubstateType = (uint8)CharacterSubstateType_Aim::IDLE_AIM;
	}
}
