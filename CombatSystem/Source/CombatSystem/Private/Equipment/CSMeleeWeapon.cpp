// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipment/CSMeleeWeapon.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
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

	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ACSMeleeWeapon::OnBeginOverlap);

	DamageEnabled = false;
}

void ACSMeleeWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void ACSMeleeWeapon::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor == nullptr || !DamageEnabled || OtherActor == GetOwner() || OtherActor->GetOwner() == GetOwner()) { return; }

	ACSCharacter* OtherCharacter = Cast<ACSCharacter>(OtherActor);
	EPhysicalSurface ImpactedSurface = OtherCharacter ? SURFACE_FLESH : EPhysicalSurface::SurfaceType3;
	PlayImpactEffects(ImpactedSurface, OtherActor->GetActorLocation());

	FString DebugString = "OtherActor: " + OtherActor->GetFName().ToString() + "\n OtherComponent: " + OtherComp->GetFName().ToString()
		+ "\n SurfaceType : " + FString::FromInt(ImpactedSurface);
	//UE_LOG(LogTemp, Log, TEXT("%s"), *DebugString);
	//DrawDebugString(GetWorld(), OtherActor->GetActorLocation() + FVector(0.0f, 0.0f, 0.0f),	DebugString, NULL, FColor::Yellow, 3.0f, true, 1.0f);

	if (OtherCharacter != nullptr && OtherCharacter->GetHealthComponent()->IsInvulnerable()) { return; }

	float DamageMultiplier = 1.0f;
	if (Character)
	{
		UCSCharacterState_Attack* AttackState = Cast<UCSCharacterState_Attack>(Character->GetCharacterState(CharacterStateType::ATTACK));
		if (AttackState)
		{
			AttackState->OnEnemyHit();
			DamageMultiplier = AttackState->GetDamageMultiplier();
		}
	}

	//We want to avoid multiple collisions so we only collide with the capsule component
	UCapsuleComponent* CapsuleComponent = Cast<UCapsuleComponent>(OtherComp);
	if (CapsuleComponent == nullptr) { return; }

	UGameplayStatics::ApplyDamage(OtherActor, DamageAmount * DamageMultiplier, GetOwner()->GetInstigatorController(), this, DamageType);
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



