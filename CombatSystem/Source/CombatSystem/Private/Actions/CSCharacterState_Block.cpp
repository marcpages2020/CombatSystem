// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Block.h"
#include "CSCharacter.h"

UCSCharacterState_Block::UCSCharacterState_Block()
{
	Type = CharacterStateType::BLOCK;
	MontageSpeed = 1.0f;
}

void UCSCharacterState_Block::EnterState()
{
	Super::EnterState();

	Character->PlayAnimMontage(BlockMontage, MontageSpeed, NAME_None);
}

void UCSCharacterState_Block::UpdateState(float DeltaTime)
{
	if (Character->IsStateRequested(CharacterStateType::DEFAULT))
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
}

void UCSCharacterState_Block::ExitState()
{
}
