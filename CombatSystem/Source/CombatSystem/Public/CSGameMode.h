// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CSGameMode.generated.h"

/**
 * 
 */

class ACSCharacter;

UCLASS()
class COMBATSYSTEM_API ACSGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public: 
	ACSGameMode();
	
	void OnCharacterDead(ACSCharacter* DeadCharacter);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
		float TimeToResetAfterDeath;

	void ResetGame();
};
