// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Hit.generated.h"

class UAnimMontage;

UENUM(BlueprintType)
enum class CharacterSubstateType_Hit : uint8
{
	DEFAULT_HIT,
	BLOCK_HIT,
	PARRIED_HIT,
	KICKED_HIT
};

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Hit : public UCSCharacterState
{
	GENERATED_BODY()

protected:
	UCSCharacterState_Hit();

	//General Hit ===========================================================
	UPROPERTY(EditDefaultsOnly, Category = "Hit")
	float RecoilForce;

	//Default Hit ===========================================================
	UPROPERTY(EditDefaultsOnly, Category = "DefaultHit")
	UAnimMontage* DefaultHitMontage;

	UPROPERTY(EditDefaultsOnly, Category = "DefaultHit")
	float DefaultHitPlaySpeed;

	UPROPERTY(EditDefaultsOnly, Category = "DefaultHit")
	float DefaultHitRandomDeviation;

	//Block Hit =============================================================
	UPROPERTY(EditDefaultsOnly, Category = "BlockHit")
	UAnimMontage* BlockHitMontage;

	UPROPERTY(EditDefaultsOnly, Category = "BlockHit")
	float BlockHitPlaySpeed;

	UPROPERTY(EditDefaultsOnly, Category = "BlockHit")
	float BlockHitRandomDeviation;

	//Parry hit =============================================================
	UPROPERTY(EditDefaultsOnly, Category = "ParriedHit")
	UAnimMontage* ParriedHitMontage;

	UPROPERTY(EditDefaultsOnly, Category = "ParriedHit")
	float ParriedHitPlaySpeed;

	UPROPERTY(EditDefaultsOnly, Category = "ParriedHit")
	float ParriedHitRandomDeviation;

	UPROPERTY(EditDefaultsOnly, Category = "ParriedHit")
	float ParriedHitDamageMultiplier;

	//Parry hit =============================================================
	UPROPERTY(EditDefaultsOnly, Category = "KickedHit")
	UAnimMontage* KickedHitMontage;

	UPROPERTY(EditDefaultsOnly, Category = "KickedHit")
	float KickedHitPlaySpeed;

	UPROPERTY(EditDefaultsOnly, Category = "KickedHit")
	float KickedHitRandomDeviation;

public:
	void EnterState(uint8 NewSubstate = 0u) override;
	void ExitState() override;

	void OnAnimationEnded() override;

	float GetDamageMultiplier();
};
