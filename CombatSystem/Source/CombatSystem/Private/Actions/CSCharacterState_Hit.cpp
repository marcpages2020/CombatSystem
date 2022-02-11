// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Hit.h"

#include "CSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UCSCharacterState_Hit::UCSCharacterState_Hit()
{
	Type = CharacterStateType::HIT;
}

void UCSCharacterState_Hit::EnterState()
{
	Super::EnterState();

	Character->GetCharacterMovement()->MovementMode = EMovementMode::MOVE_None;

	if (Character->LastState == CharacterStateType::BLOCK)
	{
		Character->PlayAnimMontage(BlockHitMontage, BlockHitPlaySpeed + FMath::RandRange(-BlockHitRandomDeviation, BlockHitRandomDeviation));
	}
	else
	{
		Character->PlayAnimMontage(DefaultHitMontage, DefaultHitPlaySpeed + FMath::RandRange(-DefaultHitRandomDeviation, DefaultHitRandomDeviation));
	}
}

void UCSCharacterState_Hit::ExitState()
{
	Super::ExitState();

	Character->GetCharacterMovement()->MovementMode = EMovementMode::MOVE_Walking;
}

void UCSCharacterState_Hit::OnAnimationEnded()
{
	Character->ChangeState(CharacterStateType::DEFAULT);

	UE_LOG(LogTemp, Log, TEXT("Hit ended"));
}
