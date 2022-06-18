// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSCharacterState.generated.h"

class ACSCharacter;
class UForceFeedbackEffect;

UENUM(BlueprintType)
enum class CharacterStateType : uint8
{
	NONE,
	DEFAULT  UMETA(DisplayName = "Default"),
	ATTACK   UMETA(DisplayName = "Attack"),
	DODGE    UMETA(DisplayName = "Dodge"),
	BLOCK    UMETA(DisplayName = "Block"),
	PARRY    UMETA(DisplayName = "Parry"),
	COUNTER  UMETA(DisplayName = "Counter"),
	KICK     UMETA(DisplayName = "Kick"),
	AIM		 UMETA(DisplayName = "Aim"),
	HIT	     UMETA(DisplayName = "Hit"),
	DEAD     UMETA(DisplayName = "Dead"),
	MAX_STATES,
};

/**
 *
 */

UCLASS(Blueprintable)
class COMBATSYSTEM_API UCSCharacterState : public UObject
{
	GENERATED_BODY()

protected:
	UCSCharacterState();

	FTimerHandle TimerHandle_StateRequest;
	ACSCharacter* Character;

public:
	float RequestTime;

	UPROPERTY(VisibleAnywhere, Category = "State")
		CharacterStateType StateType;

	UPROPERTY(VisibleAnywhere, Category = "State")
		uint8 CurrentSubstate;

	uint8 LastSubstate;

	UPROPERTY(EditDefaultsOnly, Category = "State")
		float StaminaCost;

	virtual void Init(ACSCharacter* MyCharacter, float MyRequestTime);

	virtual void RequestState(uint8 NewSubstate = 0u);
	virtual void DeleteStateRequest();

	virtual bool CanEnterState();

	virtual void EnterState(uint8 NewSubstate = 0u);
	virtual void UpdateState(float DeltaTime);
	virtual void ExitState();

	virtual void OnAnimationEnded();
	virtual void OnAnimationNotify(FString AnimationNotifyName);

	virtual void OnAction(FString ActionName, EInputEvent KeyEvent);

	float GetRequestElapsedTime();

public:
	bool StateRequested;

	void StartSlowMotion(float Duration, float SlowMotionSpeed);
	void StopSlowMotion();

	ACharacter* GetNearestFacingEnemy(TArray<ACharacter*> NearbyEnemies, float Range);
};
