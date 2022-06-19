// Fill out your copyright notice in the Description page of Project Settings.
#include "Actions/CSCharacterState_Parry.h"

#include "CSCharacter.h"
#include "Components/CSCameraManagerComponent.h"
#include "Actions/CSCharacterState_Hit.h"
#include "NiagaraFunctionLibrary.h"

UCSCharacterState_Parry::UCSCharacterState_Parry() : UCSCharacterState()
{
	StateType = CharacterStateType::PARRY;

	ParryMargin = 30.0f;
	ApproachSpeed = 20.0f;

	ParticlesSocketName = "SwordTrailSocket";
}

void UCSCharacterState_Parry::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->SetCanMove(false);

	CanParry = false;
	CharacterParried = false;
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
					CharacterParried = true;
					ParriedCharacterPosition = CharacterToParry->GetActorLocation();
					if (ParryImpactEffect)
					{
						UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ParryImpactEffect, Character->GetMesh()->GetSocketLocation(ParticlesSocketName));
					}
				}
			}
		}
	}

	if (CharacterParried)
	{
		float Distance = (ParriedCharacterPosition - Character->GetActorLocation()).Length();
		if (Distance > ParryMargin)
		{
			FVector NewLocation = FMath::Lerp(Character->GetActorLocation(), ParriedCharacterPosition, ApproachSpeed * DeltaTime);
			Character->SetActorLocation(NewLocation);
		}

	}
}

void UCSCharacterState_Parry::ExitState()
{
	Super::ExitState();

	Character->SetCanMove(true);
}

void UCSCharacterState_Parry::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "EnableParry")
	{
		CanParry = true;
	}
	else if (AnimationNotifyName == "DisableParry")
	{
		CanParry = false;
	}
	else if (AnimationNotifyName == "ParryBlockEnd")
	{
		if (!CharacterParried)
		{
			Character->ChangeState(CharacterStateType::DEFAULT);
		}
	}
	else if (AnimationNotifyName == "ParryImpact")
	{
		Character->GetCameraManager()->PlayCameraShake(ImpactShake, 1.0f);
	}
}