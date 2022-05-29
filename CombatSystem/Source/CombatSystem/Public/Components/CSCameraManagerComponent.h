// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CSCameraManagerComponent.generated.h"

class ACSCharacter;
class UCameraComponent;
class USpringArmComponent;
class UCameraShakeBase;

UENUM(BlueprintType)
enum class CSCameraShakeType : uint8
{
	CAMERA_SHAKE_NONE,
	CAMERA_SHAKE_HIT,
	CAMERA_SHAKE_WEAPON_STRIKE,
	CAMERA_SHAKE_DODGE
};

UCLASS(ClassGroup=(CombatSystem), meta=(BlueprintSpawnableComponent))
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

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float LockingInterpolationSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FVector CloseCameraAddition;

	float DefaultTurnSpeed;
	float DefaultLookUpSpeed;

	/*Values between 0.0 and 1.0 to limit speed*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Camera|CameraSpeed")
	float TurnSpeed;

	/*Values between 0.0 and 1.0 to limit speed*/
	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Camera|CameraSpeed")
	float LookUpSpeed;

	//Spring Arm ===========================================================================================
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float ArmLengthInterpSpeed;

	float DefaultArmLength;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float MultipleEnemiesArmLength;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float MultipleEnemiesArmLengthMargin;

	FVector DefaultSocketOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FVector MultipleEnemiesSocketOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FVector AimSocketOffset;

	//Camera ===============================================================================================
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float DefaultFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float LockedFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float AimFOV;

	void InterpolateLookToEnemy(ACharacter* LockedEnemy, int32 NearbyEnemies);

	FRotator GetLockedRotation(ACharacter* LockedEnemy);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AdjustCamera(float DeltaTime, ACharacter* LockedEnemy, int32 NearbyEnemies);

	float GetLookUpSpeed() const;
	float GetDefaultLookUpSpeed() const;
	void SetLookUpSpeed(float NewLookUpSpeed);

	float GetTurnSpeed() const;
	float GetDefaultTurnSpeed() const;
	void SetTurnSpeed(float NewTurnSpeed);

	UPROPERTY(EditDefaultsOnly, Category = "Camera|CameraSpeed")
	float AimTurnSpeed;

	UPROPERTY(EditDefaultsOnly, Category = "Camera|CameraSpeed")
	float AimLookUpSpeed;

	void PlayCameraShake(TSubclassOf<UCameraShakeBase> CameraShake, float scale);
	void StopCameraShake(TSubclassOf<UCameraShakeBase> CameraShake, bool StopImmediately = true);

protected:
	float CalculateDesiredFOV(ACharacter* LockedEnemy, int32 NearbyEnemies);
	FVector CalculateDesiredSocketOffset(ACharacter* LockedEnemy, int32 NearbyEnemies);
	float CalculateDesiredArmLength(ACharacter* LockedEnemy, int32 NearbyEnemies);
};
