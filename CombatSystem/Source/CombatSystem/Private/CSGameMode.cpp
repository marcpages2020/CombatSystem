// Fill out your copyright notice in the Description page of Project Settings.
#include "CSGameMode.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "CSCharacter.h"

ACSGameMode::ACSGameMode() : AGameModeBase()
{

}

void ACSGameMode::OnCharacterDead(ACSCharacter* DeadCharacter)
{
	if (DeadCharacter->IsPlayerControlled())
	{
		FTimerHandle ResetTimerHandle;
		GetWorldTimerManager().SetTimer(ResetTimerHandle, this, &ACSGameMode::ResetGame, TimeToResetAfterDeath, false);
	}
}

void ACSGameMode::ResetGame()
{
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}
