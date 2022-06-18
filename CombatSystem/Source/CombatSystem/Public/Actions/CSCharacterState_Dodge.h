// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSCharacterState.h"
#include "CSCharacterState_Dodge.generated.h"

class UCameraShakeBase;
class UForceFeedbackEffect;

/**
 *
 */
UCLASS()
class COMBATSYSTEM_API UCSCharacterState_Dodge : public UCSCharacterState
{
	GENERATED_BODY()

public:
	UCSCharacterState_Dodge();

	//UPROPERTY(EditDefaultsOnly, Category = "Default Dodge")
	//float RollAdditiveSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "State")
		float MaxInputTimeToDodge;

	UPROPERTY(EditDefaultsOnly, Category = "Roll")
		UAnimMontage* RollMontage;

	UPROPERTY(EditDefaultsOnly, Category = "Roll")
		float RollMontageSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Roll")
		float RollSpeed;

	virtual bool CanEnterState() override;

	void EnterState(uint8 NewSubstate = 0u) override;
	void UpdateState(float DeltaTime) override;
	void ExitState() override;

	virtual void OnAnimationNotify(FString AnimationNotifyName) override;
	virtual void OnAnimationEnded() override;

	UFUNCTION(BlueprintCallable)
		void SetDodgeDirection(FVector direction);

protected:
	FVector CalculateDodgeDirection();

	FVector DodgeDirection;

	UPROPERTY(EditDefaultsOnly, Category = "Dodge")
		TSubclassOf<UCameraShakeBase> DodgeShake;

	UPROPERTY(EditAnywhere, Category = "Dodge")
		UForceFeedbackEffect* DodgeForceFeedback;
};
