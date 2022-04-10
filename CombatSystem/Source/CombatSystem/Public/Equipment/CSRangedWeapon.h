// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../CSWeapon.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSRangedWeapon.generated.h"

class ACSProjectile;
class ACSCharacter;

UCLASS()
class COMBATSYSTEM_API ACSRangedWeapon : public ACSWeapon
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACSRangedWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Ranged Weapon")
	float WeaponRange;
		
	UPROPERTY(EditDefaultsOnly, Category = "Ranged Weapon")
	float MaxShootImpulse;

	FTimerHandle TimerHandle_ChargeTimer;

	UPROPERTY(EditDefaultsOnly, Category = "Ranged Weapon")
	float MaxChargeTime;

	void OnMaxChargeTimeReached();

	float CalculateDamageMultiplier();

	UPROPERTY(EditDefaultsOnly, Category = "Projectiles")
	TSubclassOf<ACSProjectile> DefaultProjectileClass;
	
	FVector CalculateProjectileDestination();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ranged Weapon|Sounds")
	USoundBase* RecoilSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ranged Weapon|Sounds")
	USoundBase* ShootSound;

public:	
	void StartRecoiling();
	
	void Shoot();
};
