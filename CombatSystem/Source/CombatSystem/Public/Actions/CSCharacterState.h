// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSCharacterState.generated.h"

class ACSCharacter;

UENUM()
enum class CharacterStateType : uint8
{
	NONE,
	DEFAULT UMETA(DisplayName = "Default"),
	//RUNNING,
	ATTACK UMETA(DisplayName = "Attack"),
	DODGE  UMETA(DisplayName = "Dodge"),
	DEAD   UMETA(DisplayName = "Dead"),
	MAX_STATES,
	//BLOCK  UMETA(DisplayName = "Block")
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
	CharacterStateType Type;

	virtual void Init(ACSCharacter* MyCharacter, float MyRequestTime);

	virtual void RequestState();
	virtual void DeleteStateRequest();

	virtual void EnterState();
	virtual void UpdateState(float DeltaTime);
	virtual void ExitState();

	virtual void OnAnimationEnded();

	float GetRequestElapsedTime() const;

public:
	bool StateRequested;
};
