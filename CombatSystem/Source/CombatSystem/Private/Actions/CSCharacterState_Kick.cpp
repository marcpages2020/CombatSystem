// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Kick.h"
#include "CSCharacter.h"
#include "DrawDebugHelpers.h"
#include "Actions/CSCharacterState_Hit.h"
#include "Components/CSCameraManagerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CSStaminaComponent.h"
#include "NiagaraFunctionLibrary.h"

UCSCharacterState_Kick::UCSCharacterState_Kick() : UCSCharacterState()
{
	StateType = CharacterStateType::KICK;
	KickedEnemiesDetectionSphereRadius = 30.0f;

	HitPauseTimeDilation = 0.3f;
	HitPauseDuration = 0.5f;
}

bool UCSCharacterState_Kick::CanEnterState()
{
	return Character->GetStaminaComponent()->HasEnoughStamina(StaminaCost);
}

void UCSCharacterState_Kick::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->PlayAnimMontage(KickMontage);
	Character->GetStaminaComponent()->ConsumeStamina(StaminaCost);

	Character->SetCanMove(false);
}

void UCSCharacterState_Kick::ExitState()
{
	Super::ExitState();
	Character->SetCanMove(true);
}

void UCSCharacterState_Kick::OnAnimationNotify(FString AnimationNotifyName)
{
	bool CharacterKicked = false;
	if (AnimationNotifyName == "KickStrike")
	{
		TArray<ACSCharacter*> KickedCharacters = DetectKickedCharacters();

		if (KickedCharacters.Num() > 0)
		{
			Character->GetCameraManager()->PlayCameraShake(KickImpactShake, 0.5f);
		}

		for (size_t i = 0; i < KickedCharacters.Num(); ++i)
		{
			//UE_LOG(LogTemp, Warning, TEXT("Kicked character: %s"), *KickedCharacters[i]->GetName());
			UCSCharacterState_Hit* HitState = Cast<UCSCharacterState_Hit>(KickedCharacters[i]->GetCharacterState(CharacterStateType::HIT));
			if (HitState)
			{
				if (KickImpactEffect) {
					UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), KickImpactEffect, Character->GetMesh()->GetSocketLocation(FootSocketName));
				}
				HitState->OnCharacterKicked(Character, Character->GetActorForwardVector() * KickForce);
				CharacterKicked = true;

			}
		}
	}

	if (CharacterKicked)
	{
		Character->PlayForceFeedback(KickForceFeedback);
		if (KickImpactSound) { UGameplayStatics::PlaySoundAtLocation(GetWorld(), KickImpactSound, Character->GetActorLocation()); }
		StartSlowMotion(HitPauseDuration, HitPauseTimeDilation);
	}
	else
	{
		Character->PlayForceFeedback(FailedKickForceFeedback);
		//if (FailedKickImpactSound) { UGameplayStatics::PlaySoundAtLocation(GetWorld(), FailedKickImpactSound, Character->GetActorLocation()); }
	}
}

TArray<ACSCharacter*> UCSCharacterState_Kick::DetectKickedCharacters()
{
	TArray<ACSCharacter*> KickedCharacters;

	FCollisionShape CollShape;
	CollShape.SetSphere(KickedEnemiesDetectionSphereRadius);

	FCollisionObjectQueryParams QueryParams;
	QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
	QueryParams.AddObjectTypesToQuery(ECC_Pawn);

	TArray<FOverlapResult> Overlaps;
	GetWorld()->OverlapMultiByObjectType(Overlaps, Character->GetMesh()->GetSocketLocation(FootSocketName), FQuat::Identity, QueryParams, CollShape);

	//DrawDebugSphere(GetWorld(), Character->GetMesh()->GetSocketLocation(FootSocketName), KickedEnemiesDetectionSphereRadius, 12, FColor::Red, false, 1.0f);

	for (int i = 0; i < Overlaps.Num(); ++i)
	{
		ACSCharacter* KickedCharacter = Cast<ACSCharacter>(Overlaps[i].GetActor());
		if (KickedCharacter && KickedCharacter != Character)
		{
			KickedCharacters.Add(KickedCharacter);
		}
	}

	return KickedCharacters;
}
