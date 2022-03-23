// Fill out your copyright notice in the Description page of Project Settings.

#include "CSWeapon.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Actions/CSCharacterState.h"
#include "Actions/CSCharacterState_Attack.h"

#include "CSCharacter.h"
#include "Components/CSCameraManagerComponent.h"

//TODO: Change path
#include "D:/EpicGames/UE_5.0/Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraFunctionLibrary.h"

// Sets default values
ACSWeapon::ACSWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	CollisionComp->SetupAttachment(MeshComp);

	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ACSWeapon::OnOverlap);

	CanDamage = false;
}

// Called when the game starts or when spawned
void ACSWeapon::BeginPlay()
{
	Super::BeginPlay();
}


void ACSWeapon::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && CanDamage && OtherActor != GetOwner())
	{
		if(Character)
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

void ACSWeapon::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
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

void ACSWeapon::EnableDamage()
{
	CanDamage = true;
}

void ACSWeapon::DisableDamage()
{
	CanDamage = false;
}

void ACSWeapon::SetCharacter(ACSCharacter* NewCharacter)
{
	Character = NewCharacter;
	SetOwner(NewCharacter);
}

// Called every frame
void ACSWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

