// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Counter.generated.h"

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Counter : public UCSCharacterState
{
	GENERATED_BODY()

protected:
	UCSCharacterState_Counter();

public:
	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;
};
