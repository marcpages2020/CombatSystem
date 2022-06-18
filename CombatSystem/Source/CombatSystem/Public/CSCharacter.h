// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CSCharacter.generated.h"

class ACharacter;
class USphereComponent;
class UCameraComponent;
class USpringArmComponent;
class ACSWeapon;
class ACSShield;
class ACSRangedWeapon;

class UCSHealthComponent;
class UCSStaminaComponent;
class UCSCameraManagerComponent;

class UCSCharacterState;
enum class CharacterStateType : uint8;

class UNiagaraSystem;

DECLARE_DELEGATE_OneParam(CSStateDelegate, CharacterStateType);
DECLARE_DELEGATE_ThreeParams(CSStateKeyDelegate, CharacterStateType, FString, EInputEvent);

enum class CSCombatType : uint8
{
	MELEE,
	RANGED
};

UCLASS()
class COMBATSYSTEM_API ACSCharacter : public ACharacter
{
	GENERATED_BODY()


protected:
	// Sets default values for this character's properties
	ACSCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "CSCharacter")
		UNiagaraSystem* DestroyNiagaraSystem;

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

	UPROPERTY(BlueprintReadOnly, Category = "CSCharacter")
		bool CanMove;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Player")
		float JogSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Player")
		float RunSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Player")
		float LockedSpeed;

	//Components
	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Components")
		UCSCameraManagerComponent* CameraManagerComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Components")
		UCSHealthComponent* HealthComp;

	UPROPERTY(EditDefaultsOnly, BlueprintReadonly, Category = "Components")
		UCSStaminaComponent* StaminaComp;

	UFUNCTION()
		void OnHealthChanged(UCSHealthComponent* HealthComponent, float CurrentHealth, float HealthDelta, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	//Target Locking =======================================================================================
	UPROPERTY(VisibleAnywhere, BlueprintReadonly)
		bool TargetLocked;

	ACSCharacter* LockedEnemy;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		float TimeBetweenEnemyChange;

	bool CanChangeLockedEnemy;
	void ToggleLockTarget();
	bool LockTarget();
	void ChangeLockedTarget(float Direction);
	void EnableLockedEnemyChange();
	void UnlockTarget();

	//Enemy Detection ======================================================================================
	TArray<ACSCharacter*> GetAllVisibleEnemies(float Radius);

	bool IsEnemyVisible(ACSCharacter* Enemy);

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		float EnemyDetectionDistance;

	void OnDetectNearbyEnemies();

	TArray<ACharacter*> NearbyEnemies;

	//States ==============================================================================================
	UPROPERTY(EditDefaultsOnly)
		float RequestTime;

	UPROPERTY(EditDefaultsOnly)
		TArray<TSubclassOf<UCSCharacterState>> DefaultStates;

	UPROPERTY(BlueprintReadOnly)
		TMap<CharacterStateType, UCSCharacterState*> States;

	UPROPERTY(BlueprintReadonly)
		CharacterStateType CurrentState;

	void AddState(TSubclassOf<UCSCharacterState> ActionClass);

	UFUNCTION(BlueprintCallable)
		void OnAnimationEnded(CharacterStateType FinishedAnimationState);

	UFUNCTION(BlueprintCallable)
		void OnAnimationNotify(CharacterStateType StateType, FString AnimationNotifyName);

	void NotifyActionToState(CharacterStateType StateType, FString ActionName, EInputEvent KeyEvent);

	bool Parriable;

	void SpawnEquipment();

	// Weapon ==============================================================================================
	ACSWeapon* CurrentWeapon;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		TSubclassOf<ACSWeapon> StarterWeaponClass;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		FName WeaponAttachSocketName;

	//Shield ===============================================================================================
	ACSShield* CurrentShield;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		TSubclassOf<ACSShield> StarterShieldClass;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		FName ShieldAttachSocketName;

	//Ranged Weapon ========================================================================================
	ACSRangedWeapon* CurrentRangedWeapon;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		TSubclassOf<ACSRangedWeapon> StarterRangedWeaponClass;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
		FName RangedWeaponAttachSocketName;

	CSCombatType CurrentCombatType;

public:
	//Functions ============================================================================================= 

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void SetCanMove(bool NewCanMove);

	virtual FVector GetPawnViewLocation() const override;

	UFUNCTION(BlueprintCallable)
		UCSHealthComponent* GetHealthComponent() const;

	UFUNCTION(BlueprintCallable)
		UCSStaminaComponent* GetStaminaComponent() const;

	UFUNCTION(BlueprintCallable)
		ACSWeapon* GetCurrentWeapon();

	ACSRangedWeapon* GetCurrentRangedWeapon() const;

	bool IsTargetLocked() const;

	UFUNCTION(BlueprintCallable)
		bool IsStateRequested(CharacterStateType Type);

	UFUNCTION(BlueprintCallable)
		UCSCharacterState* GetCharacterState(CharacterStateType StateType);

	UFUNCTION(BlueprintCallable)
		ACSCharacter* GetLockedTarget() const;

	UFUNCTION(BlueprintImplementableEvent)
		void OnSetAsTarget(bool IsTarget);

	UFUNCTION(BlueprintImplementableEvent)
		void OnHit();

	void ChangeState(CharacterStateType NewState, uint8 NewSubstate = 0u);

	UFUNCTION(BlueprintCallable)
		void RequestState(CharacterStateType Type);

	void RequestStateAndSubstate(CharacterStateType StateType, uint8 CurrentSubstate);

	CharacterStateType GetCurrentState() const;

	UFUNCTION(BlueprintCallable)
		uint8 GetCurrentSubstate() const;

	UFUNCTION(BlueprintCallable)
		uint8 GetStateCurrentSubstate(CharacterStateType StateType) const;

	UFUNCTION(BlueprintCallable)
		void SetParriable(bool Parriable);

	bool IsParriable() const;

	void OnEnemyDead(ACSCharacter* DeadCharacter);

	bool IsFacingActor(AActor* OtherActor, float AngleThreshold = 150.0f);

	TArray<ACharacter*> GetNearbyEnemies() const;

	UFUNCTION(BlueprintImplementableEvent)
		void SetCrosshairActive(bool Active);

	void ChangeCombatType(CSCombatType NewCombatType);

	UCSCameraManagerComponent* GetCameraManager() const;

	void PlayForceFeedback(UForceFeedbackEffect* ForceFeedback, FForceFeedbackParameters ForceFeedbackParameters = FForceFeedbackParameters());
	void StopForceFeedback(UForceFeedbackEffect* ForceFeedback);

	float GetMovementSpeed() const;
	void SetMaxWalkSpeed(float NewMaxWalkSpeed);
	void ResetMaxWalkSpeed();

	UFUNCTION(BlueprintImplementableEvent)
		void UpdateHealth(float UpdatedHealth);

	UFUNCTION(BlueprintImplementableEvent)
		void UpdateStamina(float UpdatedStamina);

	UFUNCTION(BlueprintCallable)
		FRotator GetAimRotation();

	//Variables =============================================================================================
	UPROPERTY(BlueprintReadonly)
		bool IsRunning;

	void StopRunning();

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
		USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
		UCameraComponent* CameraComp;

	CharacterStateType LastState;

	float MaxDistanceToEnemies;

	void StartDestroy();
};
