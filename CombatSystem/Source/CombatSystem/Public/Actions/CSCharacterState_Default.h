// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Default.generated.h"

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Default : public UCSCharacterState
{
	GENERATED_BODY()

protected:
	UCSCharacterState_Default();

public:
	bool CanEnterState() override;

	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	virtual void OnAction(FString ActionName, EInputEvent KeyEvent) override;
};
