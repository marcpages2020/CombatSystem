// Fill out your copyright notice in the Description page of Project Settings.
#include "CSGameMode.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "CSCharacter.h"
#include "Components/CSHealthComponent.h"

ACSGameMode::ACSGameMode() : AGameModeBase()
{
	TimeBetweenWaves = 2.0f;

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

		if (AliveEnemies.Num() <= 0)
		{
			SetWaveState(EWaveState::WaveComplete);
			UE_LOG(LogTemp, Warning, TEXT("Wave Completed"));

			for (size_t i = 0; i < Enemies.Num(); i++)
			{
				Enemies[i]->StartDestroy();
			}

			AliveEnemies.Empty();
			Enemies.Empty();

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

	NumberOfEnemiesToSpawn = WaveCount;

	GetWorldTimerManager().SetTimer(TimerHandle_EnemySpawner, this, &ACSGameMode::SpawnEnemyTimerElapsed, 1.0f, true, 0.0f);

	SetWaveState(EWaveState::WaveInProgress);
}

void ACSGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_EnemySpawner);

	SetWaveState(EWaveState::WaitingToComplete);
}

void ACSGameMode::PrepareForNextWave()
{
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ACSGameMode::StartWave, TimeBetweenWaves, false);

	SetWaveState(EWaveState::WaitingToStart);
}

/*
void ACSGameMode::CheckWaveState()
{
	bool IsPreparingForWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);
	if (NumberOfEnemiesToSpawn > 0 || IsPreparingForWave)
	{
		return;
	}

	bool IsAnyEnemyAlive = false;
	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It)
	{
		APawn* TestPawn = It->Get();
		if (TestPawn == nullptr || TestPawn->IsPlayerControlled())
		{
			continue;
		}

		UCSHealthComponent* HealthComponent = Cast<UCSHealthComponent>(TestPawn->GetComponentByClass(UCSHealthComponent::StaticClass()));
		if (HealthComponent && HealthComponent->GetCurrentHealth() > 0.0f)
		{
			IsAnyEnemyAlive = true;
			break;
		}
	}

	if (!IsAnyEnemyAlive)
	{
		SetWaveState(EWaveState::WaveComplete);
		PrepareForNextWave();
	}
}
*/

/*
void ACSGameMode::CheckAnyPlayerAlive()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = It->Get();
		if (PC && PC->GetPawn())
		{
			APawn* MyPawn = PC->GetPawn();
			UCSHealthComponent* HealthComponent = Cast<UCSHealthComponent>(MyPawn->GetComponentByClass(UCSHealthComponent::StaticClass()));
			if (ensure(HealthComponent) && HealthComponent->GetCurrentHealth() > 0.0f)
			{
				return;
			}
		}
	}

	GameOver();
}
*/

void ACSGameMode::ResetGame()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void ACSGameMode::GameOver()
{
	EndWave();
	SetWaveState(EWaveState::GameOver);
	UE_LOG(LogTemp, Warning, TEXT("Game Over"));
}

void ACSGameMode::SetWaveState(EWaveState NewWaveState)
{
	EWaveState OldState = WaveState;
	WaveState = NewWaveState;

	WaveStateChanged(WaveState, OldState);
}
