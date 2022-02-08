// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Default.h"
#include "CSCharacter.h"

UCSCharacterState_Default::UCSCharacterState_Default()
{
	Type = CharacterStateType::DEFAULT;
}

void UCSCharacterState_Default::EnterState()
{
	Super::EnterState();
}

void UCSCharacterState_Default::UpdateState(float DeltaTime)
{
	if (Character->IsStateRequested(CharacterStateType::ATTACK))
	{
		Character->ChangeState(CharacterStateType::ATTACK);
		return;
	}

	if (Character->IsStateRequested(CharacterStateType::DODGE))
	{
		Character->ChangeState(CharacterStateType::DODGE);
		return;
	}

	if (Character->IsStateRequested(CharacterStateType::BLOCK))
	{
		Character->ChangeState(CharacterStateType::BLOCK);
		return;
	}
}

void UCSCharacterState_Default::ExitState()
{
}
