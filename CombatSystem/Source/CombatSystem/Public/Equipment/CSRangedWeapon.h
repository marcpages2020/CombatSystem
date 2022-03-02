// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSRangedWeapon.generated.h"

class USkeletalMeshComponent;
class ACSProjectile;

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

	UPROPERTY(EditDefaultsOnly, Category = "Projectiles")
	float MaxShootImpulse;

	UPROPERTY(EditDefaultsOnly, Category = "Projectiles")
	TSubclassOf<ACSProjectile> DefaultProjectileClass;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;
	void Shoot(FVector ControlForwardVector);
};
