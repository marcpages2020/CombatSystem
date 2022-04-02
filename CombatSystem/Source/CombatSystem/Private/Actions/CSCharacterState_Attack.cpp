// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Attack.h"
#include "CSCharacter.h"
#include "Runtime/Engine/Public/EngineGlobals.h"
#include "Components/CSCameraManagerComponent.h"
#include "Equipment/CSMeleeWeapon.h"

UCSCharacterState_Attack::UCSCharacterState_Attack() : UCSCharacterState()
{
	StateType = CharacterStateType::ATTACK;

	CurrentSubstate = (uint8)CharacterSubstateType_Attack::NONE_ATTACK;
	LastSubstate =    (uint8)CharacterSubstateType_Attack::NONE_ATTACK;
}

void UCSCharacterState_Attack::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->SetAcceptUserInput(false);

	if (Character->IsRunning || Character->LastState == CharacterStateType::DODGE)
	{
		CurrentSubstate = (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK;
		UE_LOG(LogTemp, Log, TEXT("Character was running"));
	}
	else
	{
		if (LastSubstate == (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK)
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Attack::SECONDARY_ATTACK;
		}
		else
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK;
		}
	}

	UE_LOG(LogTemp, Log, TEXT("Current substate: %d"), CurrentSubstate);
	UE_LOG(LogTemp, Log, TEXT("Last substate: %d"), LastSubstate);

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

	if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK)
	{
		FVector Translation = Character->GetActorForwardVector() * SpiralAttackMovementSpeed * DeltaTime;
		Character->SetActorLocation(Character->GetActorLocation() + Translation);
	}
}

void UCSCharacterState_Attack::ExitState()
{
	Super::ExitState();

	UE_LOG(LogTemp, Log, TEXT("Current substate 1: %d"), CurrentSubstate);
	UE_LOG(LogTemp, Log, TEXT("Last substate 1: %d"), LastSubstate);

	Character->SetAcceptUserInput(true);

	ACSMeleeWeapon* MeleeWeapon = Cast<ACSMeleeWeapon>(Character->GetCurrentWeapon());
	if (MeleeWeapon)
	{
		MeleeWeapon->SetCanDamage(false);
	}

	if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::SPIRAL_ATTACK)
	{
		Character->StopRunning();
	}
}

void UCSCharacterState_Attack::OnAnimationEnded()
{
	if (Character->IsStateRequested(CharacterStateType::ATTACK))
	{
		if (CurrentSubstate == (uint8)CharacterSubstateType_Attack::NONE_ATTACK || CurrentSubstate == (uint8)CharacterSubstateType_Attack::SECONDARY_ATTACK)
		{
			Character->ChangeState(CharacterStateType::ATTACK, (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK);
		}
	}
	else
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
		CurrentSubstate = (uint8)CharacterSubstateType_Attack::NONE_ATTACK;
	}
}

void UCSCharacterState_Attack::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "EnableDamage")
	{
		ACSMeleeWeapon* MeleeWeapon = Cast<ACSMeleeWeapon>(Character->GetCurrentWeapon());
		if (MeleeWeapon)
		{
			MeleeWeapon->SetCanDamage(true);
		}
	}
	else if (AnimationNotifyName == "DisableDamage")
	{
		ACSMeleeWeapon* MeleeWeapon = Cast<ACSMeleeWeapon>(Character->GetCurrentWeapon());
		if (MeleeWeapon)
		{
			MeleeWeapon->SetCanDamage(false);
		}
	}
	else if (AnimationNotifyName == "CanChangeAttack")
	{
		if (StateRequested && CurrentSubstate == (uint8)CharacterSubstateType_Attack::DEFAULT_ATTACK)
		{
			Character->ChangeState(CharacterStateType::ATTACK, (uint8)CharacterSubstateType_Attack::SECONDARY_ATTACK);
		}
	}

}

void UCSCharacterState_Attack::OnEnemyHit()
{
	Character->GetCameraManager()->PlayCameraShake(StrikeShake, 0.25f);
	if (WeaponStrikeForceFeedback)
	{
		GetWorld()->GetFirstPlayerController()->ClientPlayForceFeedback(WeaponStrikeForceFeedback);
	}
	//UE_LOG(LogTemp, Log, TEXT("On enemy hit"));
}
