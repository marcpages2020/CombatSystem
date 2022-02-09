// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CSShield.generated.h"

class USkeletalMeshComponent;
class UBoxComponent;

UCLASS()
class COMBATSYSTEM_API ACSShield : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACSShield();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
