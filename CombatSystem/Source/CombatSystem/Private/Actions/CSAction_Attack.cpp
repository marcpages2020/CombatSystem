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

	switch (Character->LastState)
	{
	case CharacterState::RUNNING:
		CurrentAttackType = AttackType::SPIRAL_ATTACK;
		UE_LOG(LogTemp, Log, TEXT("Spiral attack"));
		break;

	case CharacterState::DODGING:
		UE_LOG(LogTemp, Log, TEXT("Last state was dodging"));
		CurrentAttackType = AttackType::ROLLING_ATTACK;
		break;

	default:
		CurrentAttackType = AttackType::DEFAULT_ATTACK;
		break;
	}
}

void UCSAction_Attack::UpdateAction(float DeltaTime)
{
	if (ActionRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to attack"));
	}
	FVector Translation;
	switch (CurrentAttackType)
	{
	case AttackType::SPIRAL_ATTACK:
		Translation = Character->GetActorForwardVector() * SpiralAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
		break;

	case AttackType::ROLLING_ATTACK:
		Translation = Character->GetActorForwardVector() * RollingAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
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
