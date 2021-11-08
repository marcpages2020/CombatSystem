// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CSAction.generated.h"

class ACSCharacter;

UENUM()
enum class ActionType : uint8
{
	ATTACK UMETA(DisplayName = "Attack"),
	EVADE  UMETA(DisplayName = "Evade"),
	MAX_ACTIONS,
	//BLOCK  UMETA(DisplayName = "Block")
};

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API UCSAction : public UObject
{
	GENERATED_BODY()

protected: 
	UCSAction();

	FTimerHandle TimerHandle_ActionRequest;
	ACSCharacter* Character;

public: 
	UPROPERTY(EditDefaultsOnly, Category = "Action")
	float RequestTime;

	ActionType Type;

	virtual void Init(ActionType MyActionType);

	virtual void RequestAction();
	virtual void DeleteActionRequest();

	virtual void StartAction();
	virtual void UpdateAction(float DeltaTime);
	virtual void StopAction();

	bool ActionRequested;
};
