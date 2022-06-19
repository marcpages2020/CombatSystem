// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Dead.generated.h"

class UAnimSequence;

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Dead : public UCSCharacterState
{
	GENERATED_BODY()

protected:
	UCSCharacterState_Dead();

	UPROPERTY(EditDefaultsOnly, Category = "Dead")
		UAnimMontage* DeathMontage;

	//UPROPERTY(EditDefaultsOnly, Category = "Block")
	//float MontageSpeed;

public:
	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnAnimationNotify(FString AnimationNotifyName) override;
};
