// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CSCharacter.generated.h"

class USphereComponent;
class UCameraComponent;
class USpringArmComponent;
class ACharacter;
class ACSWeapon;

UENUM()
enum class ActionType : uint8
{
	ATTACK UMETA(DisplayName = "Attack"),
	EVADE  UMETA(DisplayName = "Evade"),
	//BLOCK  UMETA(DisplayName = "Block")
};

UENUM()
enum class CharacterState : uint8
{
	DEFAULT,
	RUNNING, 
	ATTACKING,
	EVADING
};

UCLASS()
class COMBATSYSTEM_API ACSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	CharacterState CurrentState;

	//Movement 
	void MoveForward(float Value);
	void MoveRight(float Value);

	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	float TurnRate;
	float LookRate;

	bool IsRunning;

	void StartRunning();
	void StopRunning();

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Player")
	float JogSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Player")
	float RunSpeed;

	//Components
	//Spring Arm
	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	float DefaultArmLength;

	FVector DefaultSocketOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float MultipleEnemiesArmLength;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FVector MultipleEnemiesSocketOffset;

	//Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	UCameraComponent* CameraComp;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float DefaultFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float LockedFOV;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly)
	bool TargetLocked;

	void ToggleLockTarget();

	void LockTarget();

	void InterpolateLookToEnemy();

	ACharacter* LockedEnemy;
	
	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float EnemyDetectionDistance;

	void OnDetectNearbyEnemies();

	int32 NearbyEnemies;

	UFUNCTION(BlueprintCallable)
	void RequestAction(ActionType type);

	UFUNCTION(BlueprintCallable)
	void StartAction(ActionType type);

	UFUNCTION(BlueprintCallable)
	void StopAction(ActionType type);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WantsToAttack;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "Player")
	float ActionsRequestTime;

	void RequestAttack();

	UFUNCTION(BlueprintCallable)
	void StartAttacking();

	UFUNCTION(BlueprintCallable)
	void StopAttacking();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WantsToDodge;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float DodgeSpeed;

	void RequestDodge();

	UFUNCTION(BlueprintCallable)
	void DeleteDodgeRequest();

	UFUNCTION(BlueprintCallable)
	void StartDodge();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDodging;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float DodgeTime;

	ACSWeapon* CurrentWeapon;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	TSubclassOf<ACSWeapon> StarterWeaponClass;

	UPROPERTY(VisibleDefaultsOnly, Category = "Player")
	FName WeaponAttachSocketName;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	ACSWeapon* GetCurrentWeapon();
};
