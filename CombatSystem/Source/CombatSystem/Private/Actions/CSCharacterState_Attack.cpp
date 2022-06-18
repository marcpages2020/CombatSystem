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
	RollAttackMovementSpeed = 10.0f;
	StrongAttackMovementSpeed = 150.0f;

	CurrentConsecutiveAttacks = 0;
}

bool UCSCharacterState_Attack::CanEnterState()
{
	return Character->GetStaminaComponent()->HasEnoughStamina(StaminaCost);
}

void UCSCharacterState_Attack::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->SetCanMove(false);

	Character->GetStaminaComponent()->ConsumeStamina(StaminaCost);

	CurrentSubstate = NewSubstate;
	if (NewSubstate == (uint8)CharacterSubstateType_Attack::NONE_ATTACK)
	{
		if (Character->IsRunning)
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK;
			//UE_LOG(LogTemp, Log, TEXT("Character was running"));
		}
		else if (Character->LastState == CharacterStateType::DODGE)
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Attack::ROLL_ATTACK;
		}
		else
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK;
		}
	}

	switch (CurrentSubstate)
	{
	case (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK:
		if (CurrentConsecutiveAttacks < DefaultAttackAnimMontages.Num()) { Character->PlayAnimMontage(DefaultAttackAnimMontages[CurrentConsecutiveAttacks]); }
		if (CurrentConsecutiveAttacks < DefaultAttackShakes.Num()) { Character->GetCameraManager()->PlayCameraShake(DefaultAttackShakes[CurrentConsecutiveAttacks], 1.0f); }
		break;

	case (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK:
		Character->PlayAnimMontage(SpiralAttackAnimMontage);
		if (RollingAttackShake) { Character->GetCameraManager()->PlayCameraShake(RollingAttackShake, 1.0f); }
		break;

	case (uint8)CharacterSubstateType_Attack::ROLL_ATTACK:
		Character->PlayAnimMontage(RollAttackAnimMontage);
		if (RollingAttackShake) { Character->GetCameraManager()->PlayCameraShake(RollingAttackShake, 1.0f); }
		break;

	case (uint8)CharacterSubstateType_Attack::STRONG_ATTACK:
		Character->PlayAnimMontage(StrongAttackAnimMontage);
		break;

	default:
		UE_LOG(LogTemp, Error, TEXT("Not handling properly attack substates"));
		break;
	}

	//UE_LOG(LogTemp, Log, TEXT("New attack substate: %d"), CurrentSubstate);

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
	else if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * SpiralAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}
	else if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::ROLL_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * RollAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}
	else if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::STRONG_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * StrongAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}
}

void UCSCharacterState_Attack::ExitState()
{
	Super::ExitState();

	CurrentConsecutiveAttacks = 0;

	Character->SetCanMove(true);

	ACSMeleeWeapon* MeleeWeapon = Cast<ACSMeleeWeapon>(Character->GetCurrentWeapon());
	if (MeleeWeapon)
	{
		MeleeWeapon->SetDamageEnabled(false);
		//UE_LOG(LogTemp, Log, TEXT("Damage disabled by: %s"), *Character->GetFName().ToString());
	}
}

void UCSCharacterState_Attack::OnAnimationEnded()
{
	if (Character->IsStateRequested(CharacterStateType::DODGE))
	{
		Character->ChangeState(CharacterStateType::DODGE);
	}

	switch (CurrentSubstate)
	{
	case (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK:
		Character->StopAnimMontage(SpiralAttackAnimMontage);
		break;
	case (uint8)CharacterSubstateType_Attack::ROLL_ATTACK:
		Character->StopAnimMontage(RollAttackAnimMontage);
	default:
		break;
	}

	Character->ChangeState(CharacterStateType::DEFAULT);
	//UE_LOG(LogTemp, Log, TEXT("Going back to default"));
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
			if (CurrentConsecutiveAttacks < DefaultAttackShakes.Num()) { Character->GetCameraManager()->PlayCameraShake(DefaultAttackShakes[CurrentConsecutiveAttacks], 1.0f); }
			StateRequested = false;
		}
		else if (Character->IsStateRequested(CharacterStateType::DODGE))
		{
			Character->StopAnimMontage(DefaultAttackAnimMontages[CurrentConsecutiveAttacks]);
			Character->ChangeState(CharacterStateType::DODGE);
		}
		else
		{
			float Forward = Character->GetInputAxisValue("MoveForward");
			float Right = Character->GetInputAxisValue("MoveRight");

			if (Forward != 0.0f || Right != 0.0f)
			{
				Character->StopAnimMontage(DefaultAttackAnimMontages[CurrentConsecutiveAttacks]);
				Character->ChangeState(CharacterStateType::DEFAULT);
			}
		}
	}
}

void UCSCharacterState_Attack::OnEnemyHit()
{
	Character->GetCameraManager()->PlayCameraShake(StrikeShake, 0.25f);
	Character->PlayForceFeedback(WeaponStrikeForceFeedback);
	//StartSlowMotion(HitPauseDuration, HitPauseTimeDilation);
}

float UCSCharacterState_Attack::GetDamageMultiplier()
{
	return CurrentSubstate == (uint8)CharacterSubstateType_Attack::STRONG_ATTACK ? StrongAttackDamageMultiplier : 1.0;
}
