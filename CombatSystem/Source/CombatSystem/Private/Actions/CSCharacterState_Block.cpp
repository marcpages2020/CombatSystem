// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Block.h"
#include "Actions/CSCharacterState_Hit.h"
#include "CSCharacter.h"
#include "Components/CSStaminaComponent.h"

UCSCharacterState_Block::UCSCharacterState_Block() : UCSCharacterState()
{
	StateType = CharacterStateType::BLOCK;
	MontageSpeed = 1.0f;
	StaminaCostPerDamagePoint = 0.2f;
	BlockedAttackDamageReduction = 0.15f;
	ImpactMovementForce = 100.0f;

	BlockAnimationCorrection = FRotator(0.0f, 0.0f, 0.0f);
}

void UCSCharacterState_Block::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);
}

void UCSCharacterState_Block::UpdateState(float DeltaTime)
{
	if (Character->IsStateRequested(CharacterStateType::DEFAULT))
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
	else if (Character->IsStateRequested(CharacterStateType::ATTACK))
	{
		Character->ChangeState(CharacterStateType::PARRY);
	}
}

void UCSCharacterState_Block::ExitState()
{}

void UCSCharacterState_Block::OnImpact(float& Damage, const UDamageType * DamageType, AController * InstigatedBy, AActor * DamageCauser)
{
	if (Character->IsFacingActor(DamageCauser->GetOwner(), 90.0f))
	{
		float BlockingStaminaCost = StaminaCostPerDamagePoint * Damage;

		//Can block attack
		if (Character->GetStaminaComponent()->HasEnoughStamina(BlockingStaminaCost))
		{
			Character->PlayAnimMontage(BlockImpactMontage, MontageSpeed);
			
			FVector ImpactDirection = (DamageCauser->GetOwner()->GetActorLocation() - Character->GetActorLocation()).GetSafeNormal();
			Character->LaunchCharacter(-ImpactDirection * ImpactMovementForce, true, true);

			Character->GetStaminaComponent()->ConsumeStamina(BlockingStaminaCost);
			Damage *= BlockedAttackDamageReduction;
		}
		//Can't block attack
		else
		{
			Character->ChangeState(CharacterStateType::HIT, (uint8)CharacterSubstateType_Hit::DEFAULT_HIT);
		}
	}
}
