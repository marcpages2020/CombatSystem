// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Aim.h"

#include "Kismet/KismetMathLibrary.h"

#include "CSCharacter.h"
#include "Equipment/CSRangedWeapon.h"
#include "Camera/CameraComponent.h"
#include "Components/CSCameraManagerComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

UCSCharacterState_Aim::UCSCharacterState_Aim() : UCSCharacterState()
{
	StateType = CharacterStateType::AIM;

	BodyCorrectionInterpolationSpeed = 5.0f;
	MinimumCorrectionAngle = 10.0f;
	AimMaxWalkSpeed = 50.0f;
}


void UCSCharacterState_Aim::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	CurrentSubstate = (uint8)CharacterSubstateType_Aim::IDLE_AIM;

	Character->SetMaxWalkSpeed(AimMaxWalkSpeed);
	Character->GetCharacterMovement()->bOrientRotationToMovement = false;

	if (!Character->IsTargetLocked())
	{
		Character->SetCrosshairActive(true);
	}

	Character->ChangeCombatType(CSCombatType::RANGED);
	
	Character->GetCameraManager()->SetLookUpSpeed(Character->GetCameraManager()->AimLookUpSpeed);
	Character->GetCameraManager()->SetTurnSpeed(Character->GetCameraManager()->AimTurnSpeed);
}


void UCSCharacterState_Aim::UpdateState(float DeltaTime)
{
	CorrectBodyPosition();

	if (Character->IsStateRequested(CharacterStateType::DEFAULT))
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
}


void UCSCharacterState_Aim::ExitState()
{
	Character->SetCrosshairActive(false);

	Character->ChangeCombatType(CSCombatType::MELEE);

	Character->ResetMaxWalkSpeed();
	if (!Character->IsTargetLocked())
	{
		Character->GetCharacterMovement()->bOrientRotationToMovement = true;
	}

	Character->GetCameraManager()->SetLookUpSpeed(Character->GetCameraManager()->GetDefaultLookUpSpeed());
	Character->GetCameraManager()->SetTurnSpeed(Character->GetCameraManager()->GetDefaultLookUpSpeed());
	
	if (CurrentSubstate == (uint8)CharacterSubstateType_Aim::RECOIL_AIM)
	{
		StopRecoiling();
	}

	CurrentSubstate = (uint8)CharacterSubstateType_Aim::IDLE_AIM;
}


void UCSCharacterState_Aim::OnAction(FString ActionName, EInputEvent KeyEvent)
{
	if (Character->GetCurrentState() != CharacterStateType::AIM)
	{
		return;
	}

	if (ActionName == "Shoot")
	{
		if (CurrentSubstate == (uint8)CharacterSubstateType_Aim::IDLE_AIM && KeyEvent == IE_Pressed)
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Aim::RECOIL_AIM;
			StartRecoiling();
		}
		else if (CurrentSubstate == (uint8)CharacterSubstateType_Aim::RECOIL_AIM && KeyEvent == IE_Released)
		{
			CurrentSubstate = (uint8)CharacterSubstateType_Aim::SHOOT_AIM;
			Shoot();
		}
	}
}


void UCSCharacterState_Aim::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "ShootEnd")
	{
		CurrentSubstate = (uint8)CharacterSubstateType_Aim::IDLE_AIM;
	}
}


void UCSCharacterState_Aim::CorrectBodyPosition()
{
	FRotator ActorRotation = Character->GetActorRotation();
	float RotationDifference = Character->GetControlRotation().Yaw - ActorRotation.Yaw;

	if (RotationDifference > MinimumCorrectionAngle || RotationDifference < -MinimumCorrectionAngle)
	{
		FRotator DesiredRotation = FMath::RInterpTo(ActorRotation, Character->GetControlRotation(), GetWorld()->GetDeltaSeconds(), BodyCorrectionInterpolationSpeed);
		Character->SetActorRotation(FRotator(ActorRotation.Pitch, DesiredRotation.Yaw, ActorRotation.Roll));
	}
	/*else if(abs(RotationDifference) > 10.0f)
	{
		FRotator DesiredRotation = FMath::RInterpTo(ActorRotation, Character->GetControlRotation(), GetWorld()->GetDeltaSeconds(), 4.5f);
		Character->SetActorRotation(FRotator(ActorRotation.Pitch, DesiredRotation.Yaw, ActorRotation.Roll));
	}*/
}


void UCSCharacterState_Aim::StartRecoiling()
{
	ACSRangedWeapon* RangedWeapon = Character->GetCurrentRangedWeapon();
	if (RangedWeapon)
	{
		RangedWeapon->StartRecoiling();
		Character->GetCameraManager()->PlayCameraShake(RecoiledAimShake, 1.0f);
		
		if (Character->IsPlayerControlled())
		{
			FForceFeedbackParameters FeedbackParameters;
			FeedbackParameters.bLooping = true;
			FeedbackParameters.bIgnoreTimeDilation;
			Character->PlayForceFeedback(AimForceFeedback, FeedbackParameters);
		}
	}
}


void UCSCharacterState_Aim::StopRecoiling()
{
	Character->StopForceFeedback(AimForceFeedback);
}


void UCSCharacterState_Aim::Shoot()
{
	StopRecoiling();

	ACSRangedWeapon* RangedWeapon = Character->GetCurrentRangedWeapon();
	if (RangedWeapon)
	{
		RangedWeapon->Shoot();
		Character->GetCameraManager()->StopCameraShake(RecoiledAimShake);
		Character->GetCameraManager()->PlayCameraShake(ShootShake, 0.5);
		
		if (ShootForceFeedback && Character->IsPlayerControlled())
		{
			Character->PlayForceFeedback(ShootForceFeedback);
		}
	}
}
