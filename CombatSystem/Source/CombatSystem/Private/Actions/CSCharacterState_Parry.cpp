// Fill out your copyright notice in the Description page of Project Settings.
#include "Actions/CSCharacterState_Parry.h"

#include "CSCharacter.h"
#include "Actions/CSCharacterState_Hit.h"

UCSCharacterState_Parry::UCSCharacterState_Parry() : UCSCharacterState()
{
	StateType = CharacterStateType::PARRY;
}

void UCSCharacterState_Parry::EnterState(uint8 NewSubstate)
{
	Super::EnterState();

	Character->PlayAnimMontage(ParryMontage, 1.0f);

	CanParry = true;

	//GetWorld()->GetTimerManager().SetTimer(TimerHandle_ParryAutodisable, this, &UCSCharacterState_Parry::DisableParry, ParryTimeRange, false);

	TArray<ACharacter*> NearbyEnemies = Character->GetNearbyEnemies();
	if (NearbyEnemies.Num() > 0)
	{
		ACharacter* ClosestFacingCharacter = GetNearestFacingEnemy(NearbyEnemies, ParryRange);
		if (ClosestFacingCharacter)
		{
			ACSCharacter* CharacterToParry = Cast<ACSCharacter>(ClosestFacingCharacter);
			if (CharacterToParry->GetCurrentState() == CharacterStateType::ATTACK)
			{
				//UE_LOG(LogTemp, Log, TEXT("Parriable: %s"), *ClosestFacingCharacter->GetFName().ToString());
				CharacterToParry->ChangeState(CharacterStateType::HIT, (uint8)CharacterSubstateType_Hit::PARRIED_HIT);
				CanParry = false;
			}
		}
	}
}

void UCSCharacterState_Parry::UpdateState(float DeltaTime)
{
	if (CanParry)
	{
		TArray<ACharacter*> NearbyEnemies = Character->GetNearbyEnemies();
		if (NearbyEnemies.Num() > 0)
		{
			ACharacter* ClosestFacingCharacter = GetNearestFacingEnemy(NearbyEnemies, ParryRange);
			if (ClosestFacingCharacter)
			{
				ACSCharacter* CharacterToParry = Cast<ACSCharacter>(ClosestFacingCharacter);
				if (CharacterToParry->IsParriable())
				{
					UE_LOG(LogTemp, Log, TEXT("Parriable: %s"), *ClosestFacingCharacter->GetFName().ToString());
					CharacterToParry->ChangeState(CharacterStateType::HIT, (uint8)CharacterSubstateType_Hit::PARRIED_HIT);
					CanParry = false;
				}
			}
		}
	}
}

void UCSCharacterState_Parry::ExitState()
{
	Super::ExitState();
}

void UCSCharacterState_Parry::OnMontageSectionEnded(uint8 EndedMontageSection)
{
	if (EndedMontageSection == 0u)
	{
		if (CanParry)
		{
			Character->ChangeState(CharacterStateType::DEFAULT);
		}
	}
}


void UCSCharacterState_Parry::DisableParry()
{
	CanParry = false;
}