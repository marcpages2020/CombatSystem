// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/CSHealthComponent.h"

#include "CSCharacter.h"
#include "Actions/CSCharacterState.h"
#include "Actions/CSCharacterState_Hit.h"
#include "Actions/CSCharacterState_Block.h"

// Sets default values for this component's properties
UCSHealthComponent::UCSHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	MaxHealth = 100;
	HealthRecuperationPerSecond = 0.0f;
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

void UCSHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (Character->IsPlayerControlled())
	{
		if (CurrentHealth < MaxHealth && CurrentHealth > 0.0f)
		{
			CurrentHealth += HealthRecuperationPerSecond * DeltaTime;

			Character->UpdateHealth(GetHealthPercentage());
		}
	}
}

void UCSHealthComponent::HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0.0f || Invulnerable) { return; }

	ACSCharacter* DamagerCharacter = Cast<ACSCharacter>(DamageCauser);
	if (!DamagerCharacter) { DamagerCharacter = Cast<ACSCharacter>(DamageCauser->GetOwner()); }

	bool ImpactBlocked = false;
	UCSCharacterState_Block* BlockState = Cast<UCSCharacterState_Block>(Character->GetCharacterState(CharacterStateType::BLOCK));
	//Block
	if (BlockState && Character->GetCurrentState() == CharacterStateType::BLOCK)
	{
		BlockState->OnImpact(Damage, DamageType, InstigatedBy, DamageCauser);
	}
	//Default hit
	else
	{
		if (Character->GetCurrentState() == CharacterStateType::HIT && Character->GetCurrentSubstate() == (uint8)CharacterSubstateType_Hit::PARRIED_HIT) 
		{
			UCSCharacterState_Hit* HitState = Cast< UCSCharacterState_Hit>(Character->GetCharacterState(CharacterStateType::HIT));
			if (HitState) { Damage *= HitState->GetDamageMultiplier(); }
		}

		UCSCharacterState_Hit* HitState = Cast<UCSCharacterState_Hit>(Character->GetCharacterState(CharacterStateType::HIT));
		if (HitState && DamagerCharacter)
		{
			HitState->SetDamageOrigin(DamagerCharacter->GetActorLocation());
		}
		Character->ChangeState(CharacterStateType::HIT, (uint8)CharacterSubstateType_Hit::DEFAULT_HIT);
	}

	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.0f, MaxHealth);
	OnHealthChanged.Broadcast(this, CurrentHealth, Damage, DamageType, InstigatedBy, DamageCauser);
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

float UCSHealthComponent::GetCurrentHealth() const
{
	return CurrentHealth;
}


