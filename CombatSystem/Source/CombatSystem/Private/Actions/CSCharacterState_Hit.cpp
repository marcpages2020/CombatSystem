// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Hit.h"

#include "CSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UCSCharacterState_Hit::UCSCharacterState_Hit() : UCSCharacterState()
{
	StateType = CharacterStateType::HIT;
}

void UCSCharacterState_Hit::EnterState(uint8 NewSubstate)
{
	Super::EnterState();

	FVector BackwardVector = -Character->GetActorForwardVector();

	Character->SetActorLocation(Character->GetActorLocation() + BackwardVector * RecoilForce);
	//Character->GetCharacterMovement()->AddForce(BackwardVector * RecoilForce);

	//Character->LaunchCharacter(FVector(0.0f, 0.0f, 400.0f), true, true);
	//Character->LaunchCharacter(BackwardVector * RecoilForce, true, true);

	Character->GetCharacterMovement()->MovementMode = EMovementMode::MOVE_None;

	if (SubstateType == (uint8)CharacterSubstateType_Hit::BLOCK_HIT)
	{
		Character->PlayAnimMontage(BlockHitMontage, BlockHitPlaySpeed + FMath::RandRange(-BlockHitRandomDeviation, BlockHitRandomDeviation));
	}
	else if (SubstateType == (uint8)CharacterSubstateType_Hit::PARRIED_HIT)
	{
		Character->PlayAnimMontage(ParriedHitMontage, ParriedHitPlaySpeed + FMath::RandRange(-ParriedHitRandomDeviation, ParriedHitRandomDeviation));
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
}
