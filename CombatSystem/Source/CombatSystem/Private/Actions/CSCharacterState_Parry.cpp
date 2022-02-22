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
	Super::EnterState(NewSubstate);

	Character->SetAcceptUserInput(false);

	//Character->PlayAnimMontage(ParryMontage, 1.0f);

	CanParry = false;

	//GetWorld()->GetTimerManager().SetTimer(TimerHandle_ParryAutodisable, this, &UCSCharacterState_Parry::DisableParry, ParryTimeRange, false);
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

	Character->SetAcceptUserInput(true);
}

void UCSCharacterState_Parry::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "EnableParry")
	{
		CanParry = true;
	}
	else if (AnimationNotifyName == "ParryBlockEnd")
	{
		if (CanParry)
		{
			Character->ChangeState(CharacterStateType::DEFAULT);
		}
	}
}