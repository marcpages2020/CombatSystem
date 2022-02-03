// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Dead.generated.h"

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Dead : public UCSCharacterState
{
	GENERATED_BODY()
	
protected:
	UCSCharacterState_Dead();

public:
	void EnterState() override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;
};
