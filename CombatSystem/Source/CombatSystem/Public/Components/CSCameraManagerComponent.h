// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CSCameraManagerComponent.generated.h"

class ACSCharacter;
class UCameraComponent;
class USpringArmComponent;

UCLASS( ClassGroup=(CombatSystem), meta=(BlueprintSpawnableComponent) )
class COMBATSYSTEM_API UCSCameraManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCSCameraManagerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	ACSCharacter* Character;

	USpringArmComponent* SpringArmComp;
	UCameraComponent* CameraComp;

	//Spring Arm ===========================================================================================
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float ArmLengthInterpSpeed;

	float DefaultArmLength;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float MultipleEnemiesArmLength;

	FVector DefaultSocketOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FVector MultipleEnemiesSocketOffset;

	//Camera ===============================================================================================
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float DefaultFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float LockedFOV;

	void InterpolateLookToEnemy(ACharacter* LockedEnemy);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AdjustCamera(float DeltaTime, ACharacter* LockedEnemy, int32 NearbyEnemies);
};
