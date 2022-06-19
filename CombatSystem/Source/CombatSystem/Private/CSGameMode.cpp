// Fill out your copyright notice in the Description page of Project Settings.
#include "CSGameMode.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "CSCharacter.h"
#include "Components/CSHealthComponent.h"

ACSGameMode::ACSGameMode() : AGameModeBase()
{
	TimeBetweenWaves = 2.0f;
	TimeToResetGame = 5.0f;
	//PrimaryActorTick.bCanEverTick = true;
	//PrimaryActorTick.TickInterval = 1.0f;
}

void ACSGameMode::StartPlay()
{
	Super::StartPlay();

	PrepareForNextWave();
}

void ACSGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	//CheckWaveState();
	//CheckAnyPlayerAlive();
}

void ACSGameMode::OnCharacterDead(ACSCharacter* DeadCharacter)
{
	if (DeadCharacter == nullptr) { return; }

	if (DeadCharacter->IsPlayerControlled())
	{
		FTimerHandle ResetTimerHandle;
		//GetWorldTimerManager().SetTimer(ResetTimerHandle, this, &ACSGameMode::SpawnEnemyTimerElapsed, TimeToResetAfterDeath, false);
		GameOver();
	}
	else
	{
		AliveEnemies.Remove(DeadCharacter);
		UE_LOG(LogTemp, Warning, TEXT("Remaining enemies: %d"), Enemies.Num());
		UpdateEnemiesCounter();

		if (AliveEnemies.Num() <= 0)
		{
			SetWaveState(EWaveState::WaveComplete);
			UE_LOG(LogTemp, Warning, TEXT("Wave Completed"));

			DestroyAllEnemies();

			PrepareForNextWave();
		}

	}
}

void ACSGameMode::AddEnemy(ACSCharacter* Enemy)
{
	if (Enemy == nullptr) { return; }

	Enemies.Add(Enemy);
	AliveEnemies.Add(Enemy);
}

int32 ACSGameMode::GetAliveEnemies()
{
	return AliveEnemies.Num();
}

int32 ACSGameMode::GetWaveEnemies()
{
	return Enemies.Num();
}

void ACSGameMode::SpawnEnemyTimerElapsed()
{
	SpawnNewEnemy();

	NumberOfEnemiesToSpawn--;

	if (NumberOfEnemiesToSpawn <= 0)
	{
		EndWave();
	}
}

void ACSGameMode::StartWave()
{
	WaveCount++;

	double DoubleNumberOfEnemiesToSpawn;
	std::modf((double)((float)WaveCount / 3.0f), &DoubleNumberOfEnemiesToSpawn);

	NumberOfEnemiesToSpawn = FMath::Clamp(DoubleNumberOfEnemiesToSpawn, 1, 100);

	GetWorldTimerManager().SetTimer(TimerHandle_EnemySpawner, this, &ACSGameMode::SpawnEnemyTimerElapsed, 1.0f, true, 0.0f);

	SetWaveState(EWaveState::WaveInProgress);

	OnWaveStarted();
}

void ACSGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_EnemySpawner);

	SetWaveState(EWaveState::WaitingToComplete);
	UpdateEnemiesCounter();
}

void ACSGameMode::PrepareForNextWave()
{
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ACSGameMode::StartWave, TimeBetweenWaves, false);

	SetWaveState(EWaveState::WaitingToStart);
}

void ACSGameMode::DestroyAllEnemies()
{
	for (size_t i = 0; i < Enemies.Num(); i++)
	{
		Enemies[i]->StartDestroy();
	}

	AliveEnemies.Empty();
	Enemies.Empty();
}

void ACSGameMode::ResetGame()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void ACSGameMode::GameOver()
{
	EndWave();
	SetWaveState(EWaveState::GameOver);
	UE_LOG(LogTemp, Warning, TEXT("Game Over"));

	OnGameOver();

	FTimerHandle TimerHandle_ResetGame;
	GetWorldTimerManager().SetTimer(TimerHandle_ResetGame, this, &ACSGameMode::ResetGame, TimeToResetGame, false, 5.0f);
}

void ACSGameMode::SetWaveState(EWaveState NewWaveState)
{
	EWaveState OldState = WaveState;
	WaveState = NewWaveState;

	WaveStateChanged(WaveState, OldState);
}
