// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CSGameMode.generated.h"

/**
 *
 */

class ACSCharacter;

UENUM(BlueprintType)
enum class EWaveState : uint8
{
	WaitingToStart,
	WaveInProgress,
	WaitingToComplete,
	WaveComplete,
	GameOver
};


UCLASS()
class COMBATSYSTEM_API ACSGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	ACSGameMode();

	FTimerHandle TimerHandle_EnemySpawner;

	FTimerHandle TimerHandle_NextWaveStart;

	int32 NumberOfEnemiesToSpawn;

	UPROPERTY(BlueprintReadOnly, Category = "GameMode")
		int32 WaveCount;

	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
		float TimeBetweenWaves;

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
		void SpawnNewEnemy();

	void SpawnEnemyTimerElapsed();

	void StartWave();
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
		void OnWaveStarted();
	void EndWave();
	void PrepareForNextWave();
	void DestroyAllEnemies();
	//void CheckWaveState();
	//void CheckAnyPlayerAlive();

	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
		float TimeToResetGame;
	void ResetGame();
	void GameOver();

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
		void OnGameOver();

	UPROPERTY(BlueprintReadOnly, Category = "GameMode")
		EWaveState WaveState;

	void SetWaveState(EWaveState NewWaveState);

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
		void WaveStateChanged(EWaveState NewState, EWaveState OldState);

	TArray<ACSCharacter*> Enemies;
	TArray<ACSCharacter*> AliveEnemies;

	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
		void UpdateEnemiesCounter();

public:
	virtual void StartPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	void OnCharacterDead(ACSCharacter* DeadCharacter);

	UFUNCTION(BlueprintCallable, Category = "GameMode")
		void AddEnemy(ACSCharacter* Enemy);

	UFUNCTION(BlueprintCallable, Category = "GameMode")
		int32 GetAliveEnemies();

	UFUNCTION(BlueprintCallable, Category = "GameMode")
		int32 GetWaveEnemies();
};
