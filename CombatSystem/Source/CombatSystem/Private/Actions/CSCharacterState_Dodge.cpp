// Fill out your copyright notice in the Description page of Project Settings.

#include "Actions/CSCharacterState_Dodge.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "CSCharacter.h"
#include "Components/CSCameraManagerComponent.h"
#include "Components/CSHealthComponent.h"
#include "Components/CSStaminaComponent.h"

UCSCharacterState_Dodge::UCSCharacterState_Dodge() : UCSCharacterState()
{
	StateType = CharacterStateType::DODGE;
	RequestTime = 0.5f;
	RollMontageSpeed = 1.25f;
	MaxInputTimeToDodge = 0.3f;
}

bool UCSCharacterState_Dodge::CanEnterState()
{
	return Character->GetStaminaComponent()->HasEnoughStamina(StaminaCost) && GetRequestElapsedTime() < MaxInputTimeToDodge;
}

void UCSCharacterState_Dodge::EnterState(uint8 NewSubstate)
{
	Super::EnterState(NewSubstate);

	if (RollMontage)
	{
		Character->PlayAnimMontage(RollMontage, RollMontageSpeed);
	}

	Character->GetStaminaComponent()->ConsumeStamina(StaminaCost);

	Character->SetCanMove(false);
	Character->GetCharacterMovement()->bOrientRotationToMovement = true;

	if (Character->IsPlayerControlled())
	{
		DodgeDirection = CalculateDodgeDirection().GetSafeNormal();

		//DrawDebugLine(GetWorld(), Character->GetActorLocation(), Character->GetActorLocation() + DodgeDirection * 250.0f, FColor::Green, false, 5.0f, 0u, 2.0f);
		//DrawDebugSphere(GetWorld(), Character->GetActorLocation() + DodgeDirection * 250.0f, 20.0f, 12, FColor::Red, false, 5.0f, 0u, 1.0f);
		//DodgeDirection = Character->GetActorForwardVector().GetSafeNormal();
	}

	Character->GetCameraManager()->PlayCameraShake(DodgeShake, 0.5f);
	Character->PlayForceFeedback(DodgeForceFeedback);

	//Character->SetActorRotation(DodgeDirection.ToOrientationRotator());
	Character->SetMaxWalkSpeed(RollSpeed);
}

void UCSCharacterState_Dodge::UpdateState(float DeltaTime)
{
	Character->AddMovementInput(DodgeDirection, 1.0f);
}

void UCSCharacterState_Dodge::ExitState()
{
	Super::ExitState();

	Character->SetCanMove(true);

	if (Character->IsTargetLocked() && !Character->IsRunning)
	{
		Character->GetCharacterMovement()->bOrientRotationToMovement = false;
	}

	if (!Character->IsRunning) { Character->ResetMaxWalkSpeed(); }
}


void UCSCharacterState_Dodge::OnAnimationNotify(FString AnimationNotifyName)
{
	if (AnimationNotifyName == "CanChangeState" && StateRequested)
	{
		Character->ChangeState(CharacterStateType::DODGE);
	}
}

void UCSCharacterState_Dodge::OnAnimationEnded()
{
	if (Character->IsStateRequested(CharacterStateType::ATTACK))
	{
		Character->ChangeState(CharacterStateType::ATTACK);
	}
	else
	{
		Character->ChangeState(CharacterStateType::DEFAULT);
	}
}

void UCSCharacterState_Dodge::SetDodgeDirection(FVector direction)
{
	DodgeDirection = direction;
}

FVector UCSCharacterState_Dodge::CalculateDodgeDirection()
{
	FVector direction;
	const FRotator Rotation = Character->Controller->GetControlRotation();
	const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);

	float Forward = Character->GetInputAxisValue("MoveForward");
	float Right = Character->GetInputAxisValue("MoveRight");

	//If the player wants to move in a certain direction, dodge in that direction
	if (abs(Forward) < 0.1f && abs(Right) < 0.1f)
	{
		Forward = Character->IsTargetLocked() ? -1.0f : 1.0f;
	}

	FVector forwardDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X) * Forward;
	FVector rightDirection = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y) * Right;

	direction = forwardDirection + rightDirection;

	//DrawDebugLine(GetWorld(), Character->GetActorLocation(), Character->GetActorLocation() + direction * 200.0f, FColor::Blue, false, 2.0f, 0u, 2.0f);

	return direction;
}
