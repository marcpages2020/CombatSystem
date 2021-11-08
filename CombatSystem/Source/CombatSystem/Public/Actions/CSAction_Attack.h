// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSAction.h"
#include "CSAction_Attack.generated.h"

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCSAction_Attack : public UCSAction
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "Attack")
	float damage;

	virtual void StartAction() override;
	virtual void UpdateAction(float DeltaTime) override;
	virtual void StopAction() override;

};
