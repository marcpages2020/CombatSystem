// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Parry.generated.h"

class UAnimMontage;
class UCameraShakeBase;

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Parry : public UCSCharacterState
{
	GENERATED_BODY()
	
protected:
	UCSCharacterState_Parry();

	UPROPERTY(EditDefaultsOnly, Category = "Parry")
	float ParryRange;

	bool CanParry;
	bool CharacterParried;

	FVector ParriedCharacterPosition;
	
	UPROPERTY(EditDefaultsOnly, Category = "Parry")
	float ParryMargin;

	UPROPERTY(EditDefaultsOnly, Category = "Parry")
	float ApproachSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Parry")
	TSubclassOf<UCameraShakeBase> ImpactShake;

public:
	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnAnimationNotify(FString AnimationNotifyName) override;
};
