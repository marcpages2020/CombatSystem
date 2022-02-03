// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Dead.h"

UCSCharacterState_Dead::UCSCharacterState_Dead()
{
	Type = CharacterStateType::DEAD;
}

void UCSCharacterState_Dead::EnterState()
{
}

void UCSCharacterState_Dead::UpdateState(float DeltaTime)
{
}

void UCSCharacterState_Dead::ExitState()
{
}
