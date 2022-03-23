// Fill out your copyright notice in the Description page of Project Settings.


#include "Actions/CSCharacterState_Aim.h"

#include "Kismet/KismetMathLibrary.h"

#include "CSCharacter.h"
#include "Equipment/CSRangedWeapon.h"
#include "Camera/CameraComponent.h"
#include "Components/CSCameraManagerComponent.h"

UCSCharacterState_Aim::UCSCharacterState_Aim()
{
	StateType = CharacterStateType::AIM;
}

void UCSCharacterState_Aim::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	SubstateType = (uint8)CharacterSubstateType_Aim::IDLE_AIM;

	if (!Character->IsTargetLocked())
	{
		Character->SetCrosshairActive(true);
	}

	Character->ChangeCombatType(CSCombatType::RANGED);
	
	//TODO: Change for a variable when the engine stops bugging
	Character->GetCameraManager()->SetLookUpSpeed(Character->GetCameraManager()->AimLookUpSpeed);
	Character->GetCameraManager()->SetTurnSpeed(Character->GetCameraManager()->AimTurnSpeed);
	//Character->GetCameraManager()->SetLookUpSpeed(0.5f);
	//Character->GetCameraManager()->SetTurnSpeed(0.5f);
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

	Character->GetCameraManager()->SetLookUpSpeed(Character->GetCameraManager()->GetDefaultLookUpSpeed());
	Character->GetCameraManager()->SetTurnSpeed(Character->GetCameraManager()->GetDefaultLookUpSpeed());
}

void UCSCharacterState_Aim::OnAction(FString ActionName, EInputEvent KeyEvent)
{
	if (ActionName == "Shoot")
	{
		if (SubstateType == (uint8)CharacterSubstateType_Aim::IDLE_AIM && KeyEvent == IE_Pressed)
		{
			SubstateType = (uint8)CharacterSubstateType_Aim::RECOIL_AIM;
			StartRecoiling();
		}
		else if (SubstateType == (uint8)CharacterSubstateType_Aim::RECOIL_AIM && KeyEvent == IE_Released)
		{
			SubstateType = (uint8)CharacterSubstateType_Aim::SHOOT_AIM;
			Shoot();
		}
	}
}

void UCSCharacterState_Aim::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "ShootEnd")
	{
		SubstateType = (uint8)CharacterSubstateType_Aim::IDLE_AIM;
	}
}

void UCSCharacterState_Aim::CorrectBodyPosition()
{
	FRotator ActorRotation = Character->GetActorRotation();
	float RotationDifference = Character->GetControlRotation().Yaw - ActorRotation.Yaw;
	
	
	if (abs(RotationDifference) > 15.0f)
	{
		FRotator DesiredRotation = FMath::RInterpTo(ActorRotation, Character->GetControlRotation(), GetWorld()->GetDeltaSeconds(), 16.0f);
		Character->SetActorRotation(FRotator(ActorRotation.Pitch, DesiredRotation.Yaw, ActorRotation.Roll));
	}
	else if(abs(RotationDifference) > 10.0f)
	{
		FRotator DesiredRotation = FMath::RInterpTo(ActorRotation, Character->GetControlRotation(), GetWorld()->GetDeltaSeconds(), 4.5f);
		Character->SetActorRotation(FRotator(ActorRotation.Pitch, DesiredRotation.Yaw, ActorRotation.Roll));
	}
}

void UCSCharacterState_Aim::StartRecoiling()
{
	ACSRangedWeapon* RangedWeapon = Character->GetCurrentRangedWeapon();
	if (RangedWeapon)
	{
		RangedWeapon->StartRecoiling();
		Character->GetCameraManager()->PlayCameraShake(RecoiledAimShake, 1.0f);
	}
}

void UCSCharacterState_Aim::Shoot()
{
	ACSRangedWeapon* RangedWeapon = Character->GetCurrentRangedWeapon();
	if (RangedWeapon)
	{
		RangedWeapon->Shoot();
		Character->GetCameraManager()->StopCameraShake(RecoiledAimShake);
		Character->GetCameraManager()->PlayCameraShake(ShootShake, 0.5);
	}
}
