// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Default.h"
#include "Actions/CSCharacterState_Attack.h"
#include "CSCharacter.h"

UCSCharacterState_Default::UCSCharacterState_Default() : UCSCharacterState()
{
	StateType = CharacterStateType::DEFAULT;
}

bool UCSCharacterState_Default::CanEnterState()
{
	if (Character->GetCurrentState() == CharacterStateType::DEAD)
	{
		return false;
	}

	return true;
}

void UCSCharacterState_Default::EnterState(uint8 NewSubstate)
{
	Super::EnterState();
	//UE_LOG(LogTemp, Log, TEXT("Last state: %d"), Character->LastState);
}

void UCSCharacterState_Default::UpdateState(float DeltaTime)
{
	if (Character->IsStateRequested(CharacterStateType::ATTACK))
	{
		Character->ChangeState(CharacterStateType::ATTACK);
	}
	else if (Character->IsStateRequested(CharacterStateType::AIM))
	{
		Character->ChangeState(CharacterStateType::AIM);
	}
	else if (Character->IsStateRequested(CharacterStateType::KICK))
	{
		Character->ChangeState(CharacterStateType::KICK);
	}
	else if (Character->IsStateRequested(CharacterStateType::PARRY))
	{
		Character->ChangeState(CharacterStateType::PARRY);
	}
	else if (Character->IsStateRequested(CharacterStateType::BLOCK))
	{
		Character->ChangeState(CharacterStateType::BLOCK);
	}
	else if (!Character->IsPlayerControlled())
	{
		if (Character->IsStateRequested(CharacterStateType::DODGE))
		{
			Character->ChangeState(CharacterStateType::DODGE);
		}
	}
}

void UCSCharacterState_Default::ExitState()
{
	Character->ResetMaxWalkSpeed();
}

void UCSCharacterState_Default::OnAction(FString ActionName, EInputEvent KeyEvent)
{
	if (Character->GetCurrentState() != CharacterStateType::DEFAULT)
	{
		return;
	}

	if (ActionName == "Dodge" && Character->IsStateRequested(CharacterStateType::DODGE) && CanEnterState())
	{
		Character->ChangeState(CharacterStateType::DODGE);
	}
	else if (ActionName == "StrongAttack" && KeyEvent == EInputEvent::IE_Pressed)
	{
		Character->ChangeState(CharacterStateType::ATTACK, (uint8)CharacterSubstateType_Attack::STRONG_ATTACK);
	}
}
