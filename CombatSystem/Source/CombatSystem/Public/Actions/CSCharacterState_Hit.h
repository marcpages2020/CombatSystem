// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Hit.generated.h"

class UAnimMontage;

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Hit : public UCSCharacterState
{
	GENERATED_BODY()

protected:
	UCSCharacterState_Hit();

	UPROPERTY(EditDefaultsOnly, Category = "DefaultHit")
	UAnimMontage* DefaultHitMontage;

	UPROPERTY(EditDefaultsOnly, Category = "DefaultHit")
	float DefaultHitPlaySpeed;

	UPROPERTY(EditDefaultsOnly, Category = "DefaultHit")
	float DefaultHitRandomDeviation;

	UPROPERTY(EditDefaultsOnly, Category = "BlockHit")
	UAnimMontage* BlockHitMontage;

	UPROPERTY(EditDefaultsOnly, Category = "BlockHit")
	float BlockHitPlaySpeed;

	UPROPERTY(EditDefaultsOnly, Category = "BlockHit")
	float BlockHitRandomDeviation;

public:
	void EnterState() override;
	void ExitState() override;

	void OnAnimationEnded() override;

};
