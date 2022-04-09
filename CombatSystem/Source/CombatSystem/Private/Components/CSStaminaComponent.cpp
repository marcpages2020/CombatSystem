
#include "Components/CSStaminaComponent.h"

#include "CSCharacter.h"

// Sets default values for this component's properties
UCSStaminaComponent::UCSStaminaComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	Character = Cast<ACSCharacter>(GetOwner());

	MaxStamina = 100.0f;
	StaminaRecuperationPerSecond = 3.0f;
}


// Called when the game starts
void UCSStaminaComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentStamina = MaxStamina;
}

void UCSStaminaComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (CurrentStamina < MaxStamina)
	{
		CurrentStamina += StaminaRecuperationPerSecond * DeltaTime;

		Character->UpdateStamina(GetStaminaPercentage());
	}
}

bool UCSStaminaComponent::HasEnoughStamina(float DesiredStaminaConsumption)
{
	return (CurrentStamina - DesiredStaminaConsumption) > 0.0f;
}

void UCSStaminaComponent::ConsumeStamina(float StaminaToConsume)
{
	CurrentStamina = FMath::Clamp(CurrentStamina - StaminaToConsume, 0.0f, MaxStamina);

	Character->UpdateStamina(GetStaminaPercentage());
}

float UCSStaminaComponent::GetStaminaPercentage() const
{
	return CurrentStamina / MaxStamina;
}

