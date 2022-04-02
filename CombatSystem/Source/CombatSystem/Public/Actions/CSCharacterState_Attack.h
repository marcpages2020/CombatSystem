// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSCharacterState.h"
#include "CSCharacterState_Attack.generated.h"

/**
 * 
 */

class UCameraShakeBase;
class UForceFeedbackEffect;

UENUM(BlueprintType)
enum class CharacterSubstateType_Attack : uint8
{
	NONE_ATTACK		   UMETA(DisplayName = "None Attack"),
	DEFAULT_ATTACK	   UMETA(DisplayName = "Default Attack"),
	SECONDARY_ATTACK   UMETA(DisplayName = "Secondary Attack"),
	SPIRAL_ATTACK	   UMETA(DisplayName = "Spiral Attack")
};

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Attack : public UCSCharacterState
{
	GENERATED_BODY()
	
public: 
	UCSCharacterState_Attack();

	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnAnimationEnded() override;
	void OnAnimationNotify(FString AnimationNotifyName) override;

	void OnEnemyHit();

protected:	
	UPROPERTY(EditAnywhere, Category = "Attack")
	float SpiralAttackMovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Attack")
	float RollingAttackMovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Attack")
	TSubclassOf<UCameraShakeBase> StrikeShake;

	UPROPERTY(EditAnywhere, Category = "Attack")
	UForceFeedbackEffect* WeaponStrikeForceFeedback;
};
