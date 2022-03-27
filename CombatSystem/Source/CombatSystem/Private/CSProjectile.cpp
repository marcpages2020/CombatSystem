// Fill out your copyright notice in the Description page of Project Settings.

#include "CSProjectile.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"
#include "../CombatSystem.h"

//TODO: Change path
#include "D:/EpicGames/UE_5.0/Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraFunctionLibrary.h"
#include "D:/EpicGames/UE_5.0/Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponent.h"

// Sets default values
ACSProjectile::ACSProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	RootComponent = MeshComponent;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->SetupAttachment(MeshComponent);

	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &ACSProjectile::OnOverlap);

	DamageMultiplier = 1.0f;

	CanBeDestroyed = false;
}

// Called when the game starts or when spawned
void ACSProjectile::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle TimerHandle_CanBeDestroyed;
	GetWorldTimerManager().SetTimer(TimerHandle_CanBeDestroyed, this, &ACSProjectile::SetCanBeDestroyed, 0.032f, false);

	TrailComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(TrailEffect, GetMesh(), FName("TrailSocket"), GetActorLocation(), GetActorRotation(), EAttachLocation::SnapToTarget, true);
	if (TrailComponent)
	{
		TrailComponent->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}

void ACSProjectile::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!CanBeDestroyed)
	{
		return;
	}

	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//Finish drawing the projectile into the actor to avoid cases such as arrows staying right in the impact point
	SetActorLocation(GetActorLocation() + GetActorForwardVector().GetSafeNormal() * 40.0f);

	if (OtherActor && GetOwner() && OtherActor != GetOwner())
	{
		UGameplayStatics::ApplyDamage(OtherActor, BaseDamage * DamageMultiplier, GetOwner()->GetInstigatorController(), this, DamageType);
		EPhysicalSurface PhysicalSurface = DetectCollidedPhysicalSurface();
		
		if (PhysicalSurface == SURFACE_FLESH_CRITICAL) 
		{
			DamageMultiplier = 5.0f;
		}
		
		PlayImpactEffects(PhysicalSurface, OverlappedComponent->GetComponentLocation());


		//DrawDebugSphere(GetWorld(), GetActorLocation(), 20.0f, 12, FColor::Red, false, 2.0f);

		ACharacter* OtherCharacter = Cast<ACharacter>(OtherActor);
		//Check if it is an object possessed by a character such a shield or sword
		if (!OtherCharacter && OtherActor->GetOwner())
		{
			OtherCharacter = Cast<ACharacter>(OtherActor->GetOwner());
		}
		if (OtherCharacter)
		{
			//AttachToComponent(OtherCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			Destroy();
		}
	}

	DisableComponentsSimulatePhysics();
}

void ACSProjectile::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	UNiagaraSystem* ImpactEffect;
	switch (SurfaceType)
	{
	case SURFACE_FLESH:
		ImpactEffect = FleshImpactEffect;
		break;
	case SURFACE_FLESH_CRITICAL:
		ImpactEffect = FleshImpactEffect;
		break;

	default:
		ImpactEffect = DefaultImpactEffect;
		break;
	}

	if (ImpactEffect)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactEffect, ImpactPoint);
	}
}

void ACSProjectile::SetCanBeDestroyed()
{
	CanBeDestroyed = true;
}

EPhysicalSurface ACSProjectile::DetectCollidedPhysicalSurface()
{
	FVector Offset = CollisionComponent->GetForwardVector().GetSafeNormal() * 20.0f;
	FVector TraceStart = GetActorLocation() - Offset;
	FVector TraceEnd = CollisionComponent->GetComponentLocation() - Offset + CollisionComponent->GetUpVector().GetSafeNormal() * 40.0f;

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	QueryParams.bTraceComplex = true;
	QueryParams.bReturnPhysicalMaterial = true;

	FHitResult Hit;
	GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, COLLISION_WEAPON, QueryParams);
	//DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Green, false, 10.0f, 0u, 2.0f);

	return UPhysicalMaterial::DetermineSurfaceType(Hit.PhysMaterial.Get());
}

// Called every frame
void ACSProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

UStaticMeshComponent* ACSProjectile::GetMesh()
{
	return MeshComponent;
}

void ACSProjectile::SetDamageMultiplier(float NewDamageMultiplier)
{
	DamageMultiplier = NewDamageMultiplier;
}

