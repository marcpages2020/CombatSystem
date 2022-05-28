// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipment/CSMeleeWeapon.h"
#include "Components/BoxComponent.h"
#include "CSCharacter.h"
#include "Components/CSHealthComponent.h"
#include "../CombatSystem.h"

#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Actions/CSCharacterState.h"
#include "Actions/CSCharacterState_Attack.h"
#include <CombatSystem/CombatSystem.h>

#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

ACSMeleeWeapon::ACSMeleeWeapon()
{
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	CollisionComp->SetupAttachment(MeshComp);

	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ACSMeleeWeapon::OnOverlap);

	DamageEnabled = false;
}

void ACSMeleeWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void ACSMeleeWeapon::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && DamageEnabled && OtherActor != GetOwner())
	{
		ACSCharacter* OtherCharacter = Cast<ACSCharacter>(OtherActor);
		if (OtherCharacter && OtherCharacter->GetHealthComponent()->IsInvulnerable())
		{
			return;
		}

		if (Character)
		{
			UCSCharacterState_Attack* AttackState = Cast<UCSCharacterState_Attack>(Character->GetCharacterState(CharacterStateType::ATTACK));
			if (AttackState)
			{
				AttackState->OnEnemyHit();
			}
		}

		float DamageMultiplier = 1.0f;

		UCSCharacterState_Attack* AttackState = Cast< UCSCharacterState_Attack>(Character->GetCharacterState(CharacterStateType::ATTACK));
		if (AttackState)
		{
			DamageMultiplier = AttackState->GetDamageMultiplier();
		}


		UGameplayStatics::ApplyDamage(OtherActor, DamageAmount * DamageMultiplier, GetOwner()->GetInstigatorController(), this, DamageType);
		PlayImpactEffects(EPhysicalSurface::SurfaceType1, OtherActor->GetActorLocation());
	}
}


void ACSMeleeWeapon::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	CharacterSubstateType_Attack AttackSubstate = (CharacterSubstateType_Attack)Character->GetCurrentSubstate();

	switch (SurfaceType)
	{
	case SURFACE_FLESH:
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);

		switch (AttackSubstate)
		{
		case CharacterSubstateType_Attack::DEFAULT_ATTACK:
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), FleshImpactSound, ImpactPoint);
			break;
		default:
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), FleshImpactSound, ImpactPoint);
			break;
		}
		break;

	case SURFACE_FLESH_CRITICAL:
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);

		switch (AttackSubstate)
		{
		case CharacterSubstateType_Attack::DEFAULT_ATTACK:
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), FleshImpactSound, ImpactPoint);
			break;
		default:
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), FleshImpactSound, ImpactPoint);
			break;
		}
		break;

	default:
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), DefaultImpactEffect, ImpactPoint);
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), DefaultSlashSound, ImpactPoint);
		break;
	}
}


void ACSMeleeWeapon::SetDamageEnabled(bool Enabled)
{
	DamageEnabled = Enabled;
}


void ACSMeleeWeapon::OnAttackBegin(CharacterSubstateType_Attack AttackSubstate)
{
	/*
	switch (AttackSubstate)
	{
	case CharacterSubstateType_Attack::DEFAULT_ATTACK:
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), DefaultSlashSound, GetActorLocation());
		break;

	case CharacterSubstateType_Attack::SECONDARY_ATTACK:
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), SecondarySlashSound, GetActorLocation());
		break;

	default:
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), DefaultSlashSound, GetActorLocation());
		break;
	}
	*/
}



