// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSRangedWeapon.generated.h"

class USkeletalMeshComponent;
class ACSProjectile;
class ACSCharacter;

UCLASS()
class COMBATSYSTEM_API ACSRangedWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACSRangedWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Ranged Weapon")
	float WeaponRange;
		
	UPROPERTY(EditDefaultsOnly, Category = "Ranged Weapon")
	float MaxShootImpulse;


	UPROPERTY(EditDefaultsOnly, Category = "Projectiles")
	TSubclassOf<ACSProjectile> DefaultProjectileClass;
	
	FVector CalculateProjectileDestination();


public:	
	void Shoot();

	ACSCharacter* Character;
};