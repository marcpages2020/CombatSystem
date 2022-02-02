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
class UCSHealthComponent;
class UCSCameraManagerComponent;

class UCSCharacterState;
enum class CharacterStateType : uint8;

/*
UENUM()
enum class CharacterState : uint8
{
	DEFAULT,
	RUNNING, 
	ATTACKING,
	DODGING
};
*/

UCLASS()
class COMBATSYSTEM_API ACSCharacter : public ACharacter
{
	GENERATED_BODY()

	DECLARE_DELEGATE_OneParam(CSStateDelegate, CharacterStateType);

protected:
	// Sets default values for this character's properties
	ACSCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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

	void StartRunning();
	void StopRunning();

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Player")
	float JogSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Player")
	float RunSpeed;

	//Components
	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Components")
	UCSCameraManagerComponent* CameraManagerComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Components")
	UCSHealthComponent* HealthComp;
	
	UFUNCTION()
	void OnHealthChanged(UCSHealthComponent* HealthComponent, float CurrentHealth, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	//Target Locking =======================================================================================
	UPROPERTY(VisibleAnywhere, BlueprintReadonly)
	bool TargetLocked;

	ACharacter* LockedEnemy;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float TimeBetweenEnemyChange;

	bool CanChangeLockedEnemy;

	void ToggleLockTarget();
	bool LockTarget();
	void ChangeLockedTarget(float Direction);
	void EnableLockedEnemyChange();

	//Enemy Detection ======================================================================================
	TArray<ACharacter*> GetAllVisibleEnemies(float Radius);

	bool IsEnemyVisible(ACharacter* Enemy);

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float EnemyDetectionDistance;

	void OnDetectNearbyEnemies();

	int32 NearbyEnemies;

	//Actions ==============================================================================================
	UPROPERTY(EditDefaultsOnly)
	float RequestTime;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<UCSCharacterState>> DefaultStates;

	TMap<CharacterStateType, UCSCharacterState*> States;

	UPROPERTY(BlueprintReadonly)
	CharacterStateType CurrentState;

	void AddAction(TSubclassOf<UCSCharacterState> ActionClass);

	UFUNCTION(BlueprintCallable)
	void RequestState(CharacterStateType Type);
	
	UFUNCTION(BlueprintCallable)
	void OnAnimationEnded(CharacterStateType AnimationCharacterState);
	
	// Weapon ==============================================================================================
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

	bool IsTargetLocked() const;

	UFUNCTION(BlueprintCallable)
	bool IsStateRequested(CharacterStateType Type);

	void ChangeState(CharacterStateType NewState);

	float GetStateRequestElapsedTime(CharacterStateType Type);

	UPROPERTY(BlueprintReadonly)
	bool IsRunning;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	UCameraComponent* CameraComp;
	
	CharacterStateType LastState;

	float MaxDistanceToEnemies;

};
