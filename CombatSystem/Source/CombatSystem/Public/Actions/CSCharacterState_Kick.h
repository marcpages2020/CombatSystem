// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Kick.generated.h"

/**
 * 
 */

class ACSCharacter;

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

public: 
	void EnterState(uint8 NewSubstate = 0u) override;
	void ExitState() override;

	void OnAnimationNotify(FString AnimationNotifyName) override;
};
