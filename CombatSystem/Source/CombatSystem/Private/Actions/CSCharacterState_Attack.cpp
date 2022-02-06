// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Attack.h"
#include "CSCharacter.h"
#include "Runtime/Engine/Public/EngineGlobals.h"

UCSCharacterState_Attack::UCSCharacterState_Attack()
{
	Type = CharacterStateType::ATTACK;
	CurrentAttackType = AttackType::DEFAULT_ATTACK;
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

	if (CurrentAttackType == AttackType::SPIRAL_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * SpiralAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}
	else if (CurrentAttackType == AttackType::ROLLING_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * RollingAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
		//UE_LOG(LogTemp, Log, TEXT("Movement Speed: %.2f"), RollingAttackMovementSpeed);
	}
}

void UCSCharacterState_Attack::ExitState()
{
	Super::ExitState();
}

void UCSCharacterState_Attack::OnAnimationEnded()
{
	if (Character->IsStateRequested(CharacterStateType::ATTACK) == false)
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
	else
	{
		StateRequested = false;
	}
}
