// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipment/CSMeleeWeapon.h"
#include "Components/BoxComponent.h"
#include "CSCharacter.h"

#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Actions/CSCharacterState.h"
#include "Actions/CSCharacterState_Attack.h"

ACSMeleeWeapon::ACSMeleeWeapon()
{
	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	CollisionComp->SetupAttachment(MeshComp);

	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ACSMeleeWeapon::OnOverlap);
	
	CanDamage = false;
}

void ACSMeleeWeapon::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && CanDamage && OtherActor != GetOwner())
	{
		if (Character)
		{
			UCSCharacterState_Attack* AttackState = Cast<UCSCharacterState_Attack>(Character->GetCharacterState(CharacterStateType::ATTACK));
			if (AttackState)
			{
				AttackState->OnEnemyHit();
			}
		}

		UGameplayStatics::ApplyDamage(OtherActor, DamageAmount, GetOwner()->GetInstigatorController(), this, DamageType);
		PlayImpactEffects(EPhysicalSurface::SurfaceType1, OtherActor->GetActorLocation());
	}
}


void ACSMeleeWeapon::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	switch (SurfaceType)
	{
	case EPhysicalSurface::SurfaceType1:
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
		break;

	default:
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
		break;
	}
}


void ACSMeleeWeapon::SetCanDamage(bool NewCanDamage)
{
	CanDamage = NewCanDamage;
}



