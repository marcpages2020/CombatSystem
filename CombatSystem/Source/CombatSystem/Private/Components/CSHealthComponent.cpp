// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CSHealthComponent.h"

// Sets default values for this component's properties
UCSHealthComponent::UCSHealthComponent()
{
	MaxHealth = 100;
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
	if (Damage <= 0.0f)
	{
		return;
	}

	CurrentHealth = FMath::Clamp(CurrentHealth - Damage, 0.0f, MaxHealth);
	//UE_LOG(LogTemp, Log, TEXT("Current health: %.2f"), CurrentHealth);

	OnHealthChanged.Broadcast(this, CurrentHealth, Damage, DamageType, InstigatedBy, DamageCauser);
}


