// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSWeapon.generated.h"

class USkeletalMeshComponent;
class UBoxComponent;
class UDamageType;
class UParticleSystem;
class UNiagaraSystem;
class ACSCharacter;

UCLASS()
class COMBATSYSTEM_API ACSWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACSWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;

	virtual void PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	float DamageAmount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	TSubclassOf<UDamageType> DamageType;

	ACSCharacter* Character;

public:	
	void SetCharacter(ACSCharacter* NewCharacter);

	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
