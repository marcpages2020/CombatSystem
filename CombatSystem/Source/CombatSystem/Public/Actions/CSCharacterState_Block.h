// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/CSCharacterState.h"
#include "CSCharacterState_Block.generated.h"

class UAnimMontage;
class UForceFeedbackEffect;

UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Block : public UCSCharacterState
{
	GENERATED_BODY()

protected:
	UCSCharacterState_Block();

	UPROPERTY(EditDefaultsOnly, Category = "Block")
		UAnimMontage* BlockImpactMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Block")
		float MontageSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Block")
		float MaxWalkSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Block")
		float ImpactMovementForce;

	UPROPERTY(EditDefaultsOnly, Category = "Block")
		float StaminaCostPerDamagePoint;

	UPROPERTY(EditDefaultsOnly, Category = "Block")
		float BlockedAttackDamageReduction;

	UPROPERTY(EditAnywhere, Category = "Block")
		UForceFeedbackEffect* BlockImpactForceFeedback;

public:
	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	void OnImpact(float& Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

	UPROPERTY(EditDefaultsOnly, Category = "Block")
		FRotator BlockAnimationCorrection;
};
