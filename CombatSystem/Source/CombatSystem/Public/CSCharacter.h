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
class UCSCameraManagerComponent;

class UCSCharacterState;
enum class CharacterStateType : uint8;

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

	bool AcceptUserInput;

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

	ACSCharacter* LockedEnemy;

	UPROPERTY(EditDefaultsOnly, Category = "Player")
	float TimeBetweenEnemyChange;

	bool CanChangeLockedEnemy;
	void ToggleLockTarget();
	bool LockTarget();
	void ChangeLockedTarget(float Direction);
	void EnableLockedEnemyChange();

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

	void SetAcceptUserInput(bool NewAcceptUserInput);

	virtual FVector GetPawnViewLocation() const override;

	UFUNCTION(BlueprintCallable)
	ACSWeapon* GetCurrentWeapon();

	ACSRangedWeapon* GetCurrentRangedWeapon() const;

	bool IsTargetLocked() const;

	UFUNCTION(BlueprintCallable)
	bool IsStateRequested(CharacterStateType Type);

	UCSCharacterState* GetCharacterState(CharacterStateType StateType);

	UFUNCTION(BlueprintCallable)
	ACSCharacter* GetLockedTarget() const;

	UFUNCTION(BlueprintImplementableEvent)
	void OnSetAsTarget(bool IsTarget);

	void ChangeState(CharacterStateType NewState, uint8 NewSubstate = 0);

	UFUNCTION(BlueprintCallable)
	void RequestState(CharacterStateType Type);

	void RequestStateAndSubstate(CharacterStateType StateType, uint8 SubstateType);

	CharacterStateType GetCurrentState() const;

	UFUNCTION(BlueprintCallable)
	uint8 GetCurrentSubstate() const;

	UFUNCTION(BlueprintCallable)
	uint8 GetStateCurrentSubstate(CharacterStateType StateType) const;

	UFUNCTION(BlueprintCallable)
	void SetParriable(bool Parriable);

	bool IsParriable() const;

	void OnEnemyDead(ACSCharacter* DeadCharacter);

	bool IsFacingActor(AActor* OtherActor);

	TArray<ACharacter*> GetNearbyEnemies() const;

	UFUNCTION(BlueprintImplementableEvent)
	void SetCrosshairActive(bool Active);

	void ChangeCombatType(CSCombatType NewCombatType);

	UCSCameraManagerComponent* GetCameraManager() const;

	void PlayForceFeedback(UForceFeedbackEffect* ForceFeedback, FForceFeedbackParameters ForceFeedbackParameters = FForceFeedbackParameters());
	void StopForceFeedback(UForceFeedbackEffect* ForceFeedback);

	//Variables =============================================================================================
	UPROPERTY(BlueprintReadonly)
	bool IsRunning;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	UCameraComponent* CameraComp;
	
	CharacterStateType LastState;

	float MaxDistanceToEnemies;

};
