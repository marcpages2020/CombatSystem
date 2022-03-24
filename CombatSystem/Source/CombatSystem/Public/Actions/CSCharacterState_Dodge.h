// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSCharacterState.h"
#include "CSCharacterState_Dodge.generated.h"

class UCameraShakeBase;

enum class CharacterSubstateType_Dodge : uint8
{
	DEFAULT_DODGE,
	ROLL_DODGE
};

/**
 *
 */
UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Dodge : public UCSCharacterState
{
	GENERATED_BODY()

public:
	UCSCharacterState_Dodge();

	UPROPERTY(EditDefaultsOnly, Category = "Dodge")
	float StrafeDodgeSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Default Dodge")
	float DefaultRollAdditiveSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Roll")
	float RollSpeed;

	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnAnimationEnded() override;

protected:
	FVector CalculateDodgeDirection();
	
	FVector DodgeDirection;

	UPROPERTY(EditDefaultsOnly, Category = "Dodge")
	TSubclassOf<UCameraShakeBase> DodgeShake;

	UPROPERTY(EditAnywhere, Category = "Dodge")
	UForceFeedbackEffect* DodgeForceFeedback;
};
