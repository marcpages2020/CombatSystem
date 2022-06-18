// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Kick.generated.h"

/**
 *
 */

class ACSCharacter;
class UCameraShakeBase;
class UForceFeedbackEffect;
class UNiagaraSystem;

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Kick : public UCSCharacterState
{
	GENERATED_BODY()

protected:
	UCSCharacterState_Kick();

	UPROPERTY(EditDefaultsOnly, Category = "Kick")
		UAnimMontage* KickMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Kick")
		FName FootSocketName;

	UPROPERTY(EditDefaultsOnly, Category = "Kick")
		float KickedEnemiesDetectionSphereRadius;

	UPROPERTY(EditDefaultsOnly, Category = "Kick")
		float KickForce;

	TArray<ACSCharacter*> DetectKickedCharacters();

	UPROPERTY(EditAnywhere, Category = "Kick")
		float HitPauseTimeDilation;

	UPROPERTY(EditAnywhere, Category = "Kick")
		float HitPauseDuration;

	UPROPERTY(EditDefaultsOnly, Category = "Kick")
		TSubclassOf<UCameraShakeBase> KickImpactShake;

	UPROPERTY(EditAnywhere, Category = "Kick|ForceFeedback")
		UForceFeedbackEffect* KickForceFeedback;

	UPROPERTY(EditAnywhere, Category = "Kick|ForceFeedback")
		UForceFeedbackEffect* FailedKickForceFeedback;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kick|Sounds")
		USoundBase* KickImpactSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kick|Sounds")
		USoundBase* FailedKickImpactSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kick|VFXs")
		UNiagaraSystem* KickImpactEffect;

public:
	virtual bool CanEnterState() override;

	void EnterState(uint8 NewSubstate = 0u) override;
	void ExitState() override;

	void OnAnimationNotify(FString AnimationNotifyName) override;
};
