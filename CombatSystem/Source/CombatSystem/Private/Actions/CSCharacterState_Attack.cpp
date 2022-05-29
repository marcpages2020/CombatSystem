// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Attack.h"

#include "Runtime/Engine/Public/EngineGlobals.h"
#include "GameFramework/WorldSettings.h"
#include "TimerManager.h"

#include "CSCharacter.h"
#include "Components/CSStaminaComponent.h"
#include "Components/CSCameraManagerComponent.h"
#include "Equipment/CSMeleeWeapon.h"

UCSCharacterState_Attack::UCSCharacterState_Attack() : UCSCharacterState()
{
	StateType = CharacterStateType::ATTACK;

	CurrentSubstate = (uint8)CharacterSubstateType_Attack::NONE_ATTACK;
	LastSubstate = (uint8)CharacterSubstateType_Attack::NONE_ATTACK;

	HitPauseDuration = 0.2f;
	HitPauseTimeDilation = 0.5f;
	StrongAttackDamageMultiplier = 1.5f;

	ThirdDefaultAttackMovementSpeed = 20.0f;
	SpiralAttackMovementSpeed = 150.0f;
	StrongAttackMovementSpeed = 150.0f;

	CurrentConsecutiveAttacks = 0;
}

bool UCSCharacterState_Attack::CanEnterState(CharacterStateType NewState)
{
	return Character->GetStaminaComponent()->HasEnoughStamina(StaminaCost);
}

void UCSCharacterState_Attack::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->SetAcceptUserInput(false);

	Character->GetStaminaComponent()->ConsumeStamina(StaminaCost);

	CurrentSubstate = NewSubstate;
	if (NewSubstate == (uint8)CharacterSubstateType_Attack::NONE_ATTACK)
	{
		if (Character->IsRunning || Character->LastState == CharacterStateType::DODGE)
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK;
			UE_LOG(LogTemp, Log, TEXT("Character was running"));
		}
		else
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK;
		}
	}

	switch (CurrentSubstate)
	{
	case (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK:
		Character->PlayAnimMontage(DefaultAttackAnimMontages[CurrentConsecutiveAttacks]);
		break;
	case (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK:
		Character->PlayAnimMontage(SpiralAttackAnimMontage);
		break;
	case (uint8)CharacterSubstateType_Attack::STRONG_ATTACK:
		Character->PlayAnimMontage(StrongAttackAnimMontage);
		break;
	default:
		UE_LOG(LogTemp, Error, TEXT("Not handling properly attack substates"));
		break;
	}

	UE_LOG(LogTemp, Log, TEXT("New attack substate: %d"), CurrentSubstate);

	ACSMeleeWeapon* MeleeWeapon = Cast<ACSMeleeWeapon>(Character->GetCurrentWeapon());
	if (MeleeWeapon)
	{
		MeleeWeapon->OnAttackBegin((CharacterSubstateType_Attack)CurrentSubstate);
	}
}

void UCSCharacterState_Attack::UpdateState(float DeltaTime)
{
	if (StateRequested)
	{
		GEngine->AddOnScreenDebugMessage(INDEX_NONE, DeltaTime, FColor::Yellow, TEXT("Wants to attack"));
	}

	if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK && CurrentConsecutiveAttacks == 2)
	{
		FVector Translation = Character->GetActorForwardVector() * ThirdDefaultAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}

	if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * SpiralAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}

	if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::STRONG_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * StrongAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}
}

void UCSCharacterState_Attack::ExitState()
{
	Super::ExitState();

	CurrentConsecutiveAttacks = 0;

	Character->SetAcceptUserInput(true);

	ACSMeleeWeapon* MeleeWeapon = Cast<ACSMeleeWeapon>(Character->GetCurrentWeapon());
	if (MeleeWeapon)
	{
		MeleeWeapon->SetDamageEnabled(false);
		//UE_LOG(LogTemp, Log, TEXT("Damage disabled by: %s"), *Character->GetFName().ToString());
	}

	if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK)
	{
		Character->StopRunning();
	}
}

void UCSCharacterState_Attack::OnAnimationEnded()
{
	if (Character->IsStateRequested(CharacterStateType::DODGE))
	{
		Character->ChangeState(CharacterStateType::DODGE);
	}

	Character->ChangeState(CharacterStateType::DEFAULT);
	UE_LOG(LogTemp, Log, TEXT("Going back to default"));
	CurrentSubstate = (uint8)CharacterSubstateType_Attack::NONE_ATTACK;

}

void UCSCharacterState_Attack::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "EnableDamage")
	{
		ACSMeleeWeapon* MeleeWeapon = Cast<ACSMeleeWeapon>(Character->GetCurrentWeapon());
		if (MeleeWeapon)
		{
			MeleeWeapon->SetDamageEnabled(true);
		}
	}
	else if (AnimationNotifyName == "DisableDamage")
	{
		ACSMeleeWeapon* MeleeWeapon = Cast<ACSMeleeWeapon>(Character->GetCurrentWeapon());
		if (MeleeWeapon)
		{
			MeleeWeapon->SetDamageEnabled(false);
		}
	}
	else if (AnimationNotifyName == "CanChangeAttack")
	{
		if (StateRequested && CurrentConsecutiveAttacks < DefaultAttackAnimMontages.Num())
		{
			CurrentConsecutiveAttacks++;
			Character->GetStaminaComponent()->ConsumeStamina(StaminaCost);
			Character->PlayAnimMontage(DefaultAttackAnimMontages[CurrentConsecutiveAttacks]);
			StateRequested = false;
		}
		else if (Character->IsStateRequested(CharacterStateType::DODGE))
		{
			Character->StopAnimMontage(DefaultAttackAnimMontages[CurrentConsecutiveAttacks]);
			Character->ChangeState(CharacterStateType::DODGE);
		}
	}
}

void UCSCharacterState_Attack::OnEnemyHit()
{
	Character->GetCameraManager()->PlayCameraShake(StrikeShake, 0.25f);
	Character->PlayForceFeedback(WeaponStrikeForceFeedback);
	StartSlowMotion(HitPauseDuration, HitPauseTimeDilation);
}

float UCSCharacterState_Attack::GetDamageMultiplier()
{
	return CurrentSubstate == (uint8)CharacterSubstateType_Attack::STRONG_ATTACK ? StrongAttackDamageMultiplier : 1.0;
}
