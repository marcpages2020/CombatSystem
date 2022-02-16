// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSCharacterState.h"
#include "CSCharacterState_Attack.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class CharacterSubstateType_Attack : uint8
{
	DEFAULT_ATTACK,
	SPIRAL_ATTACK,
	ROLLING_ATTACK
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

protected:	
	UPROPERTY(EditAnywhere, Category = "Attack")
	float SpiralAttackMovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Attack")
	float RollingAttackMovementSpeed;
};
