// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Aim.h"

UCSCharacterState_Aim::UCSCharacterState_Aim()
{
	StateType = CharacterStateType::AIM;
}

void UCSCharacterState_Aim::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);
}

void UCSCharacterState_Aim::UpdateState(float DeltaTime)
{
}

void UCSCharacterState_Aim::ExitState()
{
}
