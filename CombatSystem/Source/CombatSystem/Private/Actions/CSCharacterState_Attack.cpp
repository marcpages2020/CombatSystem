// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Attack.h"
#include "CSCharacter.h"
#include "Runtime/Engine/Public/EngineGlobals.h"
#include "Components/CSCameraManagerComponent.h"

UCSCharacterState_Attack::UCSCharacterState_Attack() : UCSCharacterState()
{
	StateType = CharacterStateType::ATTACK;
}

void UCSCharacterState_Attack::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->SetAcceptUserInput(false);

	if (Character->IsRunning)
	{
		SubstateType = (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK;
		UE_LOG(LogTemp, Log, TEXT("Character was running"));
	}
	else if (Character->LastState == CharacterStateType::DODGE)
	{
		SubstateType = (uint8)CharacterSubstateType_Attack::ROLLING_ATTACK;
		UE_LOG(LogTemp, Log, TEXT("Last state was dodging"));
	}
	else
	{
		SubstateType = (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK;
	}
}

void UCSCharacterState_Attack::UpdateState(float DeltaTime)
{
	if (StateRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to attack"));
	}

	if (SubstateType == (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * SpiralAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}
	else if (SubstateType == (uint8)CharacterSubstateType_Attack::ROLLING_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * RollingAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
		//UE_LOG(LogTemp, Log, TEXT("Movement Speed: %.2f"), RollingAttackMovementSpeed);
	}
}

void UCSCharacterState_Attack::ExitState()
{
	Super::ExitState();

	Character->SetAcceptUserInput(true);
}

void UCSCharacterState_Attack::OnAnimationEnded()
{
	if (Character->IsStateRequested(CharacterStateType::ATTACK) == false || SubstateType != (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK)
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
	else
	{
		StateRequested = false;
	}
}

void UCSCharacterState_Attack::OnEnemyHit()
{
	Character->GetCameraManager()->PlayCameraShake(StrikeShake, 0.25f);
	//UE_LOG(LogTemp, Log, TEXT("On enemy hit"));
}
