// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Attack.h"
#include "CSCharacter.h"
#include "Runtime/Engine/Public/EngineGlobals.h"

UCSCharacterState_Attack::UCSCharacterState_Attack()
{
	Type = CharacterStateType::ATTACK;
}

void UCSCharacterState_Attack::EnterState()
{
	Super::EnterState();

	if (Character->IsRunning)
	{
		CurrentAttackType = AttackType::SPIRAL_ATTACK;
		UE_LOG(LogTemp, Log, TEXT("Character was running"));
	}
	else if (Character->LastState == CharacterStateType::DODGE)
	{
		UE_LOG(LogTemp, Log, TEXT("Last state was dodging"));
		CurrentAttackType = AttackType::ROLLING_ATTACK;
	}
	else
	{
		CurrentAttackType = AttackType::DEFAULT_ATTACK;
	}
}

void UCSCharacterState_Attack::UpdateState(float DeltaTime)
{
	if (StateRequested)
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

void UCSCharacterState_Attack::ExitState()
{
	Super::ExitState();
}

void UCSCharacterState_Attack::OnAnimationEnded()
{
	Character->ChangeState(CharacterStateType::DEFAULT);
}
