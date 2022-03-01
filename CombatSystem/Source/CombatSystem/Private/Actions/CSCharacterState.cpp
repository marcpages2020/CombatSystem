// Fill out your copyright notice in the Description page of Project Settings.
#include "Actions/CSCharacterState.h"

#include "CSCharacter.h"

UCSCharacterState::UCSCharacterState()
{
	RequestTime = 0.75f;
	SubstateType = 0u;
}

void UCSCharacterState::Init(ACSCharacter* MyCharacter, float MyRequestTime)
{
	Character = MyCharacter;
	RequestTime = MyRequestTime;
}

void UCSCharacterState::RequestState(uint8 NewSubstate)
{
	StateRequested = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_StateRequest, this, &UCSCharacterState::DeleteStateRequest, RequestTime, false);
	SubstateType = NewSubstate;
}

void UCSCharacterState::DeleteStateRequest()
{
	StateRequested = false;
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle_StateRequest);
}

void UCSCharacterState::EnterState(uint8 NewSubstate)
{
	SubstateType = NewSubstate;

	DeleteStateRequest();
}

void UCSCharacterState::UpdateState(float DeltaTime)
{}

void UCSCharacterState::ExitState()
{}

void UCSCharacterState::OnAnimationEnded()
{
	Character->ChangeState(CharacterStateType::DEFAULT);
}

void UCSCharacterState::OnAnimationNotify(FString AnimationNotifyName)
{}

float UCSCharacterState::GetRequestElapsedTime() const
{
	return GetWorld()->GetTimerManager().GetTimerElapsed(TimerHandle_StateRequest);
}

void UCSCharacterState::OnAction(FString ActionName, EInputEvent KeyEvent)
{}

ACharacter* UCSCharacterState::GetNearestFacingEnemy(TArray<ACharacter*> NearbyEnemies, float Range)
{
	ACharacter* ClosestFacingEnemy = nullptr;
	float ClosestFacingEnemyDistance = 100000000000.0f;
	for (size_t i = 0; i < NearbyEnemies.Num(); i++)
	{
		if (Character->IsFacingActor(NearbyEnemies[i]))
		{
			float DistanceToEnemy = (NearbyEnemies[i]->GetActorLocation() - Character->GetActorLocation()).Size();

			if (DistanceToEnemy <= Range)
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