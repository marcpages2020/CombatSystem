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
class UCSActionComponent;
class UCSAction_Attack;
enum class ActionType : uint8;

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

	DECLARE_DELEGATE_OneParam(ActionDelegate, ActionType);

public:
	// Sets default values for this character's properties
	ACSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void AdjustCamera(float DeltaTime);

	CharacterState CurrentState;

	//Movement 
	void MoveForward(float Value);
	void MoveRight(float Value);

	//For Gamepad
	void Turn(float Value);
	void LookUp(float Value);

	//For Mouse
	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	float TurnRate;
	float LookRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly)
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

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float ArmLengthInterpSpeed;

	float DefaultArmLength;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float MultipleEnemiesArmLength;
	
	FVector DefaultSocketOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	FVector MultipleEnemiesSocketOffset;

	//Camera
	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	UCameraComponent* CameraComp;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float DefaultFOV;

	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float LockedFOV;

	//Target Locking
	UPROPERTY(VisibleAnywhere, BlueprintReadonly)
	bool TargetLocked;

	void ToggleLockTarget();

	void LockTarget();

	void ChangeLockedTarget(float Direction);

	void InterpolateLookToEnemy();

	ACharacter* LockedEnemy;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float TimeBetweenEnemyChange;

	bool CanChangeLockedEnemy;

	void EnableLockedEnemyChange();

	//Enemy Detection
	TArray<ACharacter*> GetAllVisibleEnemies(float Radius);

	bool IsEnemyVisible(ACharacter* Enemy);

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float EnemyDetectionDistance;

	void OnDetectNearbyEnemies();

	int32 NearbyEnemies;

	float MaxDistanceToEnemies;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCSActionComponent* ActionComp;

	UFUNCTION(BlueprintCallable)
	void RequestAction(ActionType Type);

	UFUNCTION(BlueprintCallable)
	void StartAction(ActionType Type);

	UFUNCTION(BlueprintCallable)
	void StopAction(ActionType Type);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WantsToAttack;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "Player")
	float ActionsRequestTime;

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

	virtual FVector GetPawnViewLocation() const override;

	UFUNCTION(BlueprintCallable)
	ACSWeapon* GetCurrentWeapon();
};
