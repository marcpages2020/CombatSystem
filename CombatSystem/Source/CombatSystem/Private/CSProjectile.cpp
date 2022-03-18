// Fill out your copyright notice in the Description page of Project Settings.

#include "CSProjectile.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"

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
}

// Called when the game starts or when spawned
void ACSProjectile::BeginPlay()
{
	Super::BeginPlay();

	TrailComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(TrailEffect, GetMesh(), FName("TrailSocket"), GetActorLocation(), GetActorRotation(), EAttachLocation::SnapToTarget, true);
	if (TrailComponent)
	{
		TrailComponent->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}

void ACSProjectile::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{	
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	DisableComponentsSimulatePhysics();
	
	//Finish drawing the projectile into the actor to avoid cases such as arrows staying right in the impact point
	SetActorLocation(GetActorLocation() + GetActorForwardVector().GetSafeNormal() * 40.0f);

	if (OtherActor && GetOwner() && OtherActor != GetOwner())
	{

		UGameplayStatics::ApplyDamage(OtherActor, BaseDamage * DamageMultiplier, GetOwner()->GetInstigatorController(), this, DamageType);
		PlayImpactEffects(EPhysicalSurface::SurfaceType1, OverlappedComponent->GetComponentLocation());

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
}

void ACSProjectile::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	switch (SurfaceType)
	{
	case EPhysicalSurface::SurfaceType1:
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
		break;

	default:
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), FleshImpactEffect, ImpactPoint);
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

void ACSProjectile::SetDamageMultiplier(float NewDamageMultiplier)
{
	DamageMultiplier = NewDamageMultiplier;
}

