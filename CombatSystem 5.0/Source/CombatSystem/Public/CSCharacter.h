// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CSCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;
class ACharacter;
class ACSWeapon;

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

	void MoveForward(float Value);
	void MoveRight(float Value);

	void TurnAtRate(float Rate);
	void LookUpAtRate(float Rate);

	float TurnRate;
	float LookRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Components")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly)
	bool TargetLocked;

	void ToggleLockTarget();

	void LockTarget();

	ACharacter* LockedEnemy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool WantsToAttack;

	UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "Player")
	float AttackRequestTime;

	UFUNCTION()
	void StartAttacking();

	UFUNCTION()
	void StopAttacking();

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
};
