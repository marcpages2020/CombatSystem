// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState.h"

UCSCharacterState::UCSCharacterState()
{
	RequestTime = 0.75f;
}

void UCSCharacterState::Init(ACSCharacter* MyCharacter, float MyRequestTime)
{
	Character = MyCharacter;
	RequestTime = MyRequestTime;
}

void UCSCharacterState::RequestState()
{
	StateRequested = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_StateRequest, this, &UCSCharacterState::DeleteStateRequest, RequestTime, false);
}

void UCSCharacterState::DeleteStateRequest()
{
	StateRequested = false;
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_StateRequest);
}

void UCSCharacterState::EnterState()
{
	StateRequested = false;
}

void UCSCharacterState::UpdateState(float DeltaTime)
{}

void UCSCharacterState::ExitState()
{}

void UCSCharacterState::OnAnimationEnded()
{}

float UCSCharacterState::GetRequestElapsedTime() const
{
	return GetWorld()->GetTimerManager().GetTimerElapsed(TimerHandle_StateRequest);
}

