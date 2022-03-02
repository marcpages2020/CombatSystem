// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Aim.generated.h"

UENUM(BlueprintType)
enum class CharacterSubstateType_Aim : uint8
{
	IDLE_AIM    UMETA(DisplayName = "Idle Aim"),
	RECOIL_AIM  UMETA(DisplayName = "Recoil Aim"),
	SHOOT_AIM   UMETA(DisplayName = "Shoot Aim"),
};

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Aim : public UCSCharacterState
{
	GENERATED_BODY()

protected:
	UCSCharacterState_Aim();

public: 
	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnAction(FString ActionName, EInputEvent KeyEvent) override;
	void OnAnimationNotify(FString AnimationNotifyName) override;

protected:
	void CorrectBodyPosition();

	void Shoot();
};
