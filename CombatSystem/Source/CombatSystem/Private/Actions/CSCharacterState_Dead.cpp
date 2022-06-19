// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Dead.h"

#include "CSCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

#include "Kismet/GameplayStatics.h"
#include "CSGameMode.h"

UCSCharacterState_Dead::UCSCharacterState_Dead() : UCSCharacterState()
{
	StateType = CharacterStateType::DEAD;
}

void UCSCharacterState_Dead::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	if (DeathMontage)
	{
		Character->PlayAnimMontage(DeathMontage);
	}

	Character->GetCharacterMovement()->bOrientRotationToMovement = true;
	Character->GetMovementComponent()->StopMovementImmediately();
	Character->GetCharacterMovement()->MovementMode = EMovementMode::MOVE_None;
	Character->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Character->OnSetAsTarget(false);

	ACSGameMode* GameMode = Cast<ACSGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if (GameMode)
	{
		GameMode->OnCharacterDead(Character);
	}
}

void UCSCharacterState_Dead::UpdateState(float DeltaTime)
{}

void UCSCharacterState_Dead::ExitState()
{}

void UCSCharacterState_Dead::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "DeadEnd")
	{
		Character->GetMesh()->SetSimulatePhysics(true);
	}
}
