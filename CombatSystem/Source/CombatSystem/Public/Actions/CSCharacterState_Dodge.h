// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSCharacterState.h"
#include "CSCharacterState_Dodge.generated.h"

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
	float DodgeSpeed;

	void EnterState() override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnAnimationEnded() override;

private:
	FVector CalculateDodgeDirection();
};
