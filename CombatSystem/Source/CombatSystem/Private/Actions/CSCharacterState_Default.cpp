// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Default.h"
#include "CSCharacter.h"

UCSCharacterState_Default::UCSCharacterState_Default() : UCSCharacterState()
{
	StateType = CharacterStateType::DEFAULT;
}

void UCSCharacterState_Default::EnterState(uint8 NewSubstate)
{
	Super::EnterState();
}

void UCSCharacterState_Default::UpdateState(float DeltaTime)
{
	if (Character->IsStateRequested(CharacterStateType::ATTACK))
	{
		Character->ChangeState(CharacterStateType::ATTACK);
	}
	else if (Character->IsStateRequested(CharacterStateType::DODGE))
	{
		Character->ChangeState(CharacterStateType::DODGE);
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
}

void UCSCharacterState_Default::ExitState()
{
}
