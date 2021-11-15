// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSAction_Attack.h"
#include "CSCharacter.h"
#include "Runtime/Engine/Public/EngineGlobals.h"

UCSAction_Attack::UCSAction_Attack()
{
	Type = ActionType::ATTACK;
}

void UCSAction_Attack::StartAction()
{
	Super::StartAction();

	if (Character->LastState == CharacterState::DODGING)
	{
		UE_LOG(LogTemp, Log, TEXT("Last state was dodging"));
		CurrentAttackType = AttackType::ROLLING_ATTACK;
	}
	else
	{
		CurrentAttackType = AttackType::DEFAULT_ATTACK;
	}
}

void UCSAction_Attack::UpdateAction(float DeltaTime)
{
	if (ActionRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to attack"));
	}

	switch (CurrentAttackType)
	{
	case AttackType::ROLLING_ATTACK:
		Character->MoveForward(RollingAttackMovementSpeed);
		UE_LOG(LogTemp, Log, TEXT("Movement Speed: %.2f"), RollingAttackMovementSpeed);
		break;

	default:
		break;
	}
}

void UCSAction_Attack::StopAction()
{
	Super::StopAction();
}
