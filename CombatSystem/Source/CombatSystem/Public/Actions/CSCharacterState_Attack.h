// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSCharacterState.h"
#include "CSCharacterState_Attack.generated.h"

/**
 * 
 */

enum class AttackType
{
	DEFAULT_ATTACK,
	//SECONDARY_ATTACK,
	SPIRAL_ATTACK,
	ROLLING_ATTACK
};

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Attack : public UCSCharacterState
{
	GENERATED_BODY()
	
public: 
	UCSCharacterState_Attack();

	void EnterState() override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnAnimationEnded() override;

protected:
	AttackType CurrentAttackType;
	
	UPROPERTY(EditAnywhere, Category = "Attack")
	float SpiralAttackMovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Attack")
	float RollingAttackMovementSpeed;
};
