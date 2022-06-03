// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CSWeapon.h"
#include "Actions/CSCharacterState_Attack.h"

#include "CSMeleeWeapon.generated.h"

class UBoxComponent;
class UParticleSystem;
class UNiagaraSystem;
class UNiagaraComponent;
class ACSCharacter;


UCLASS()
class COMBATSYSTEM_API ACSMeleeWeapon : public ACSWeapon
{
	GENERATED_BODY()

public:
	ACSMeleeWeapon();

	UFUNCTION(BlueprintCallable)
		void SetDamageEnabled(bool Enabled);

	void OnAttackBegin(CharacterSubstateType_Attack AttackSubstate);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UBoxComponent* CollisionComp;

	UFUNCTION()
		void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UNiagaraSystem* DefaultImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
		UNiagaraSystem* FleshImpactEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Sounds")
		USoundBase* FleshImpactSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Sounds")
		USoundBase* SecondaryFleshImpactSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Sounds")
		USoundBase* DefaultSlashSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Sounds")
		USoundBase* SecondarySlashSound;

	void PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint) override;

	bool DamageEnabled;
};
