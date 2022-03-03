// Fill out your copyright notice in the Description page of Project Settings.

#include "CSProjectile.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"

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
}

// Called when the game starts or when spawned
void ACSProjectile::BeginPlay()
{
	Super::BeginPlay();

}

void ACSProjectile::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && GetOwner() && OtherActor != GetOwner())
	{
		UGameplayStatics::ApplyDamage(OtherActor, BaseDamage, GetOwner()->GetInstigatorController(), this, DamageType);
		PlayImpactEffects(EPhysicalSurface::SurfaceType1, OverlappedComponent->GetComponentLocation());
	}
}

void ACSProjectile::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	UParticleSystemComponent* TracerComp = nullptr;
	switch (SurfaceType)
	{
	case EPhysicalSurface::SurfaceType1:
		TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
		break;

	default:
		TracerComp = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
		break;
	}
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

