#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CSStaminaComponent.generated.h"

class ACSCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COMBATSYSTEM_API UCSStaminaComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UCSStaminaComponent();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Stamina")
	float MaxStamina;

	float CurrentStamina;

	UPROPERTY(EditAnywhere, Category = "Stamina")
	float StaminaRecuperationPerSecond;

	ACSCharacter* Character;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool HasEnoughStamina(float DesiredStaminaConsumption);
	void ConsumeStamina(float StaminaToConsume);
	float GetStaminaPercentage() const;
};
