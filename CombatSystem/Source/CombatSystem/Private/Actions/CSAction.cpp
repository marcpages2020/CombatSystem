// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSAction.h"

UCSAction::UCSAction()
{
	RequestTime = 0.75f;
}

void UCSAction::Init(ActionType MyActionType)
{
	Type = MyActionType;
}

void UCSAction::RequestAction()
{
	ActionRequested = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_ActionRequest, this, &UCSAction::DeleteActionRequest, RequestTime, false);
}

void UCSAction::DeleteActionRequest()
{
	ActionRequested = false;
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_ActionRequest);
}

void UCSAction::StartAction()
{
	ActionRequested = false;
}

void UCSAction::UpdateAction(float DeltaTime)
{
}

void UCSAction::StopAction()
{
}
