// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSWeapon.h"
#include "CSMeleeWeapon.generated.h"

class UBoxComponent;
class UParticleSystem;
class UNiagaraSystem;
class ACSCharacter;

/**
 * 
 */
UCLASS()
class COMBATSYSTEM_API ACSMeleeWeapon : public ACSWeapon
{
	GENERATED_BODY()
	
public:
	ACSMeleeWeapon();

	UFUNCTION(BlueprintCallable)
	void SetCanDamage(bool NewCanDamage);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* CollisionComp;

	UFUNCTION()
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	UNiagaraSystem* FleshImpactEffect;

	void PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint) override;

	bool CanDamage;
};
