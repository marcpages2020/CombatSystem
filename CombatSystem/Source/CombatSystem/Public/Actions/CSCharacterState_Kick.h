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

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Kick : public UCSCharacterState
{
	GENERATED_BODY()
	
protected:
	UCSCharacterState_Kick();

	UPROPERTY(EditDefaultsOnly, Category = "Kick")
	FName FootSocketName;

	UPROPERTY(EditDefaultsOnly, Category = "Kick")
	float KickedEnemiesDetectionSphereRadius;

	UPROPERTY(EditDefaultsOnly, Category = "Kick")
	float KickForce;

	TArray<ACSCharacter*> DetectKickedCharacters();

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

public: 
	virtual bool CanEnterState(CharacterStateType NewState) override;

	void EnterState(uint8 NewSubstate = 0u) override;
	void ExitState() override;

	void OnAnimationNotify(FString AnimationNotifyName) override;
};
