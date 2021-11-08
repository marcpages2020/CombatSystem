// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSAction_Attack.h"
#include "Runtime/Engine/Public/EngineGlobals.h"

void UCSAction_Attack::StartAction()
{
	Super::StartAction();
}

void UCSAction_Attack::UpdateAction(float DeltaTime)
{
	if (ActionRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to attack"));
	}
}

void UCSAction_Attack::StopAction()
{
	Super::StopAction();
}
