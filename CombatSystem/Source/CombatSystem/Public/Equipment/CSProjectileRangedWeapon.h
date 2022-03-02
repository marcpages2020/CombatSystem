// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSProjectileRangedWeapon.generated.h"

class USkeletalMeshComponent;

UCLASS()
class COMBATSYSTEM_API ACSProjectileRangedWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACSProjectileRangedWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComponent;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

};
