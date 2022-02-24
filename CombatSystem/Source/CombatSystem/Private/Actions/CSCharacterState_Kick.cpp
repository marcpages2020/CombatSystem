// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Kick.h"
#include "CSCharacter.h"

UCSCharacterState_Kick::UCSCharacterState_Kick() : UCSCharacterState()
{
	StateType = CharacterStateType::KICK;
}

void UCSCharacterState_Kick::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->SetAcceptUserInput(false);
}

void UCSCharacterState_Kick::UpdateState(float DeltaTime)
{
	Super::UpdateState(DeltaTime);
}

void UCSCharacterState_Kick::ExitState()
{
	Super::ExitState();
	Character->SetAcceptUserInput(true);
}
