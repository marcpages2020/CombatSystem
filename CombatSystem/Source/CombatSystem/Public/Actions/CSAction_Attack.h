// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSAction.h"
#include "CSAction_Attack.generated.h"

/**
 * 
 */

enum class AttackType
{
	DEFAULT_ATTACK,
	SECONDARY_ATTACK,
	ROLLING_ATTACK
};

UCLASS()
class COMBATSYSTEM_API UCSAction_Attack : public UCSAction
{
	GENERATED_BODY()
	
public: 
	UCSAction_Attack();

	virtual void StartAction() override;
	virtual void UpdateAction(float DeltaTime) override;
	virtual void StopAction() override;

protected:
	AttackType CurrentAttackType;
	
	UPROPERTY(EditAnywhere, Category = "Attack")
	float RollingAttackMovementSpeed;
};
