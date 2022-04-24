// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Hit.h"

#include "CSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CSCameraManagerComponent.h"
#include "Kismet/GameplayStatics.h"

UCSCharacterState_Hit::UCSCharacterState_Hit() : UCSCharacterState()
{
	StateType = CharacterStateType::HIT;
	DamageMultiplier = 1.0f;
}

void UCSCharacterState_Hit::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	FVector BackwardVector = -Character->GetActorForwardVector();

	Character->SetActorLocation(Character->GetActorLocation() + BackwardVector * RecoilForce);

	Character->GetCameraManager()->PlayCameraShake(HitShake, 0.5f);

	if (CurrentSubstate != (uint8)CharacterSubstateType_Hit::KICKED_HIT)
	{
		Character->GetCharacterMovement()->MovementMode = EMovementMode::MOVE_None;
	}

	switch (CurrentSubstate)
	{
	case (uint8)CharacterSubstateType_Hit::BLOCK_HIT:
		Character->PlayAnimMontage(BlockHitMontage, BlockHitPlaySpeed + FMath::RandRange(-BlockHitRandomDeviation, BlockHitRandomDeviation));
		CurrentSubstate = NewSubstate;
		break;

	case (uint8)CharacterSubstateType_Hit::PARRIED_HIT:
		Character->PlayAnimMontage(ParriedHitMontage, ParriedHitPlaySpeed + FMath::RandRange(-ParriedHitRandomDeviation, ParriedHitRandomDeviation));
		CurrentSubstate = NewSubstate;
		DamageMultiplier = ParriedHitDamageMultiplier;
		break;

	case (uint8)CharacterSubstateType_Hit::KICKED_HIT:
		Character->PlayAnimMontage(KickedHitMontage, KickedHitPlaySpeed + FMath::RandRange(-KickedHitRandomDeviation, KickedHitRandomDeviation));
		break;

	default:
		int32 random = FMath::RandRange(0, DefaultHitMontages.Num() - 1);
		Character->PlayAnimMontage(DefaultHitMontages[random], DefaultHitPlaySpeed + FMath::RandRange(-DefaultHitRandomDeviation, DefaultHitRandomDeviation));
		break;
	}

	if (!HitSounds.IsEmpty())
	{
		int RandomHitSound = FMath::RandRange(0, HitSounds.Num() - 1);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), HitSounds[RandomHitSound], Character->GetActorLocation());
	}

	Character->PlayForceFeedback(HitForceFeedback);
}

void UCSCharacterState_Hit::ExitState()
{
	Super::ExitState();

	Character->GetCharacterMovement()->MovementMode = EMovementMode::MOVE_Walking;
}

void UCSCharacterState_Hit::OnAnimationEnded()
{
	if (Character->GetCurrentState() == CharacterStateType::DEAD)
	{
		return;
	}

	/*
	if (CurrentSubstate == (uint8)CharacterSubstateType_Hit::BLOCK_HIT)
	{
		Character->ChangeState(CharacterStateType::BLOCK);
	}
	else
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
	*/
	Character->ChangeState(CharacterStateType::DEFAULT);
	DamageMultiplier = 1.0f;
}

float UCSCharacterState_Hit::GetDamageMultiplier()
{
	return DamageMultiplier;
}

void UCSCharacterState_Hit::OnCharacterKicked(ACSCharacter* OffenderCharacter, FVector KickVelocity)
{
	if (Character->GetCurrentState() == CharacterStateType::DEAD)
	{
		return;
	}

	if (Character->GetCurrentState() == CharacterStateType::BLOCK && Character->IsFacingActor(OffenderCharacter))
	{
		Character->ChangeState(CharacterStateType::HIT, (uint8)CharacterSubstateType_Hit::BLOCK_HIT);
	}
	else
	{
		Character->ChangeState(CharacterStateType::HIT, (uint8)CharacterSubstateType_Hit::KICKED_HIT);
		Character->LaunchCharacter(KickVelocity, true, true);
	}
}
