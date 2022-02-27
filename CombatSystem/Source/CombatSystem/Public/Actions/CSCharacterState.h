// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSCharacterState.generated.h"

class ACSCharacter;

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
	SHOOT    UMETA(DisplayName = "Shoot"),
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

	UPROPERTY(VisibleAnywhere, Category = "Action")
	CharacterStateType StateType;

	UPROPERTY(VisibleAnywhere, Category = "Action")
	uint8 SubstateType;

	virtual void Init(ACSCharacter* MyCharacter, float MyRequestTime);

	virtual void RequestState(uint8 NewSubstate = 0u);
	virtual void DeleteStateRequest();

	virtual void EnterState(uint8 NewSubstate = 0u);
	virtual void UpdateState(float DeltaTime);
	virtual void ExitState();

	virtual void OnAnimationEnded();
	virtual void OnAnimationNotify(FString AnimationNotifyName);

	float GetRequestElapsedTime() const;

public:
	bool StateRequested;

	ACharacter* GetNearestFacingEnemy(TArray<ACharacter*> NearbyEnemies, float Range);
};
