// Fill out your copyright notice in the Description page of Project Settings.
#include "Actions/CSCharacterState.h"

#include "CSCharacter.h"

UCSCharacterState::UCSCharacterState()
{
	RequestTime = 0.75f;
	SubstateType = 0u;
}

void UCSCharacterState::Init(ACSCharacter* MyCharacter, float MyRequestTime)
{
	Character = MyCharacter;
	RequestTime = MyRequestTime;
}

void UCSCharacterState::RequestState(uint8 NewSubstate)
{
	StateRequested = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_StateRequest, this, &UCSCharacterState::DeleteStateRequest, RequestTime, false);
	SubstateType = NewSubstate;
}

void UCSCharacterState::DeleteStateRequest()
{
	StateRequested = false;
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_StateRequest);
}

void UCSCharacterState::EnterState(uint8 NewSubstate)
{
	DeleteStateRequest();
}

void UCSCharacterState::UpdateState(float DeltaTime)
{}

void UCSCharacterState::ExitState()
{}

void UCSCharacterState::OnAnimationEnded()
{
	Character->ChangeState(CharacterStateType::DEFAULT);
}

float UCSCharacterState::GetRequestElapsedTime() const
{
	return GetWorld()->GetTimerManager().GetTimerElapsed(TimerHandle_StateRequest);
}

