// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Parry.generated.h"

class UAnimMontage;

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Parry : public UCSCharacterState
{
	GENERATED_BODY()
	
protected:
	UCSCharacterState_Parry();

	UPROPERTY(EditDefaultsOnly, Category = "Parry")
	float ParryRange;

	UPROPERTY(EditDefaultsOnly, Category = "Parry")
	UAnimMontage* ParryMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Parry")
	float ParryTimeRange;

	FTimerHandle TimerHandle_ParryAutodisable;

	bool CanParry;

	void DisableParry();

public:
	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnMontageSectionEnded(uint8 EndedMontageSection) override;
};
