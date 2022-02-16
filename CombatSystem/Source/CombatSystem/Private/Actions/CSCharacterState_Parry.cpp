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

	GetWorld()->GetTimerManager().SetTimer(TimerHandle_ParryAutodisable, this, &UCSCharacterState_Parry::DisableParry, ParryTimeRange, false);

	TArray<ACharacter*> NearbyEnemies = Character->GetNearbyEnemies();
	if (NearbyEnemies.Num() > 0)
	{
		ACharacter* ClosestFacingCharacter = GetNearestFacingEnemy(NearbyEnemies);
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
			ACharacter* ClosestFacingCharacter = GetNearestFacingEnemy(NearbyEnemies);
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

ACharacter* UCSCharacterState_Parry::GetNearestFacingEnemy(TArray<ACharacter*> NearbyEnemies)
{
	ACharacter* ClosestFacingEnemy = nullptr;
	float ClosestFacingEnemyDistance = 100000000000.0f;
	for (size_t i = 0; i < NearbyEnemies.Num(); i++)
	{
		if (Character->IsFacingActor(NearbyEnemies[i]))
		{
			float DistanceToEnemy = (NearbyEnemies[i]->GetActorLocation() - Character->GetActorLocation()).Size();

			if (DistanceToEnemy <= ParryRange)
			{
				if (ClosestFacingEnemy == nullptr || DistanceToEnemy < ClosestFacingEnemyDistance)
				{
					ClosestFacingEnemy = NearbyEnemies[i];
					ClosestFacingEnemyDistance = DistanceToEnemy;
				}
			}
		}
	}

	return ClosestFacingEnemy;
}

void UCSCharacterState_Parry::DisableParry()
{
	CanParry = false;
}