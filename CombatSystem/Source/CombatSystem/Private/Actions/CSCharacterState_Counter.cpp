// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Counter.h"

UCSCharacterState_Counter::UCSCharacterState_Counter() : UCSCharacterState()
{
	StateType = CharacterStateType::COUNTER;
}

void UCSCharacterState_Counter::EnterState(uint8 NewSubstate)
{
	Super::EnterState();
}

void UCSCharacterState_Counter::UpdateState(float DeltaTime)
{
}

void UCSCharacterState_Counter::ExitState()
{
}
