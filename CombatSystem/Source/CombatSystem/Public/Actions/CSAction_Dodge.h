// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSAction.h"
#include "CSAction_Dodge.generated.h"

/**
 *
 */
UCLASS()
class COMBATSYSTEM_API UCSAction_Dodge : public UCSAction
{
	GENERATED_BODY()

	
public:
	UCSAction_Dodge();

	UPROPERTY(EditAnywhere, Category = "Dodge")
	float DodgeSpeed;

	virtual void StartAction() override;
	virtual void UpdateAction(float DeltaTime) override;
	virtual void StopAction() override;
};
