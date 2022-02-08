// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Block.generated.h"

class UAnimMontage;

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Block : public UCSCharacterState
{
	GENERATED_BODY()
	
protected:
	UCSCharacterState_Block();

	UPROPERTY(EditDefaultsOnly, Category = "Block")
	UAnimMontage* BlockMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Block")
	float MontageSpeed;

public:
	void EnterState() override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;
};
