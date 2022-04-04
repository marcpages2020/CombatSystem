// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/CSHealthComponent.h"

#include "CSCharacter.h"
#include "Actions/CSCharacterState.h"
#include "Actions/CSCharacterState_Hit.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"

// Sets default values for this component's properties
UCSHealthComponent::UCSHealthComponent()
{
	MaxHealth = 100;
	Character = Cast<ACSCharacter>(GetOwner());
}


// Called when the game starts
void UCSHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	CurrentHealth = MaxHealth;

	AActor* MyOwner = GetOwner();
	if (MyOwner)
	{
		MyOwner->OnTakeAnyDamage.AddDynamic(this, &UCSHealthComponent::HandleTakeAnyDamage);
	}
}


void UCSHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.0f || Invulnerable)
	{
		return;
	}

	if (Character->GetCurrentState() != CharacterStateType::BLOCK || !Character->IsFacingActor(InstigatedBy->GetPawn()))
	{
		if (Character->GetCurrentState() == CharacterStateType::HIT)
		{
			UCSCharacterState_Hit* HitState = Cast<UCSCharacterState_Hit>(Character->GetCharacterState(CharacterStateType::HIT));

			if (HitState)
			{
				Damage *= HitState->GetDamageMultiplier();
			}
		}

		CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.0f, MaxHealth);
		OnHealthChanged.Broadcast(this, CurrentHealth, Damage, DamageType, InstigatedBy, DamageCauser);
	}
}


bool UCSHealthComponent::IsInvulnerable() const
{
	return Invulnerable;
}


void UCSHealthComponent::SetInvulnerable(bool NewInvulnerable)
{
	Invulnerable = NewInvulnerable;
}

float UCSHealthComponent::GetHealthPercentage()
{
	return CurrentHealth / MaxHealth;
}


