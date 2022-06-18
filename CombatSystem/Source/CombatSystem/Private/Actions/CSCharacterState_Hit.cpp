// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Hit.h"

#include "CSCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CSCameraManagerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

UCSCharacterState_Hit::UCSCharacterState_Hit() : UCSCharacterState()
{
	StateType = CharacterStateType::HIT;
	DamageMultiplier = 1.0f;
	DefaultHitRotationSpeed = 5.0f;
}

void UCSCharacterState_Hit::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	Character->SetCanMove(false);

	Character->OnHit();

	FVector BackwardVector = -Character->GetActorForwardVector();
	Character->SetActorLocation(Character->GetActorLocation() + BackwardVector * RecoilForce);

	Character->GetCameraManager()->PlayCameraShake(HitShake, 0.5f);

	float DamageOriginDot = FVector::DotProduct(Character->GetActorForwardVector(), DamageOrigin - Character->GetActorLocation());
	switch (CurrentSubstate)
	{
	case (uint8)CharacterSubstateType_Hit::BLOCK_HIT:
		Character->PlayAnimMontage(BlockHitMontage, BlockHitPlaySpeed + FMath::RandRange(-BlockHitRandomDeviation, BlockHitRandomDeviation));
		CurrentSubstate = NewSubstate;
		break;

	case (uint8)CharacterSubstateType_Hit::PARRIED_HIT:
		Character->PlayAnimMontage(ParriedHitMontage, ParriedHitPlaySpeed + FMath::RandRange(-ParriedHitRandomDeviation, ParriedHitRandomDeviation));
		CurrentSubstate = NewSubstate;
		DamageMultiplier = ParriedHitDamageMultiplier;
		break;

	case (uint8)CharacterSubstateType_Hit::KICKED_HIT:
		if (DamageOriginDot > 0.0f)
		{
			Character->PlayAnimMontage(BackwardKickedHitMontage, KickedHitPlaySpeed + FMath::RandRange(-KickedHitRandomDeviation, KickedHitRandomDeviation));
		}
		else
		{
			Character->PlayAnimMontage(ForwardKickedHitMontage, KickedHitPlaySpeed + FMath::RandRange(-KickedHitRandomDeviation, KickedHitRandomDeviation));
		}
		break;

	default:
		int32 random = FMath::RandRange(0, DefaultHitMontages.Num() - 1);
		Character->PlayAnimMontage(DefaultHitMontages[random], DefaultHitPlaySpeed + FMath::RandRange(-DefaultHitRandomDeviation, DefaultHitRandomDeviation));
		break;
	}

	if (!HitSounds.IsEmpty())
	{
		int RandomHitSound = FMath::RandRange(0, HitSounds.Num() - 1);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), HitSounds[RandomHitSound], Character->GetActorLocation());
	}

	Character->PlayForceFeedback(HitForceFeedback);
}

void UCSCharacterState_Hit::UpdateState(float DeltaTime)
{
	Super::UpdateState(DeltaTime);

	//if (CurrentSubstate == (uint8)CharacterSubstateType_Hit::DEFAULT_HIT || CurrentSubstate == (uint8)CharacterSubstateType_Hit::KICKED_HIT)
	//{

	FRotator DesiredRotation;
	if (FVector::DotProduct(Character->GetActorForwardVector(), DamageOrigin - Character->GetActorLocation()) > 0.0f)
	{
		DesiredRotation = UKismetMathLibrary::FindLookAtRotation(Character->GetActorLocation(), DamageOrigin);
	}
	else
	{
		DesiredRotation = UKismetMathLibrary::FindLookAtRotation(DamageOrigin, Character->GetActorLocation());
	}

	FRotator InterpolatedRotation = FMath::RInterpTo(Character->GetActorRotation(), DesiredRotation, DeltaTime, DefaultHitRotationSpeed);
	InterpolatedRotation.Pitch = 0.0f;
	InterpolatedRotation.Roll = 0.0f;
	Character->SetActorRotation(InterpolatedRotation);

	//}
}

void UCSCharacterState_Hit::ExitState()
{
	Super::ExitState();

	Character->SetCanMove(true);
}

void UCSCharacterState_Hit::OnAnimationEnded()
{
	if (Character->GetCurrentState() == CharacterStateType::DEAD)
	{
		return;
	}

	Character->ChangeState(CharacterStateType::DEFAULT);
	DamageMultiplier = 1.0f;
}

float UCSCharacterState_Hit::GetDamageMultiplier()
{
	return DamageMultiplier;
}

void UCSCharacterState_Hit::SetDamageOrigin(FVector NewDamageOrigin)
{
	DamageOrigin = NewDamageOrigin;
	UE_LOG(LogTemp, Log, TEXT("DamageOrigin: %s"), *DamageOrigin.ToString());
}

void UCSCharacterState_Hit::OnCharacterKicked(ACSCharacter* OffenderCharacter, FVector KickVelocity)
{
	if (Character->GetCurrentState() == CharacterStateType::DEAD)
	{
		return;
	}

	if (Character->GetCurrentState() == CharacterStateType::BLOCK && Character->IsFacingActor(OffenderCharacter))
	{
		Character->ChangeState(CharacterStateType::HIT, (uint8)CharacterSubstateType_Hit::BLOCK_HIT);
	}
	else
	{
		DamageOrigin = Character->GetActorLocation() - KickVelocity;
		Character->ChangeState(CharacterStateType::HIT, (uint8)CharacterSubstateType_Hit::KICKED_HIT);
		Character->LaunchCharacter(KickVelocity, true, true);
	}
}
