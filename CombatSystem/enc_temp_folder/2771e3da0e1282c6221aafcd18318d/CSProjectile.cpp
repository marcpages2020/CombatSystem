// Fill out your copyright notice in the Description page of Project Settings.

#include "CSProjectile.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Chaos/ChaosEngineInterface.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "GameFramework/Character.h"
#include "DrawDebugHelpers.h"
#include "../CombatSystem.h"

#include "Kismet/GameplayStatics.h"

#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

// Sets default values
ACSProjectile::ACSProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionComp = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
	CollisionComp->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = CollisionComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(CollisionComp);

	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &ACSProjectile::OnOverlap);

	DamageMultiplier = 1.0f;

	CanBeDestroyed = false;
}

// Called when the game starts or when spawned
void ACSProjectile::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle TimerHandle_CanBeDestroyed;
	GetWorldTimerManager().SetTimer(TimerHandle_CanBeDestroyed, this, &ACSProjectile::SetCanBeDestroyed, 0.001f, false);

	TrailComponent = UNiagaraFunctionLibrary::SpawnSystemAttached(TrailEffect, MeshComp, FName("TrailSocket"), GetActorLocation(), GetActorRotation(), EAttachLocation::SnapToTarget, true);
	if (TrailComponent)
	{
		TrailComponent->AttachToComponent(MeshComp, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}

void ACSProjectile::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!CanBeDestroyed)
	{
		//return;
	}

	//DrawDebugSphere(GetWorld(), SpawnPosition, 10.0f, 12, FColor::Green, false, 2.0f);

	//Finish drawing the projectile into the actor to avoid cases such as arrows staying right in the impact point
	SetActorLocation(GetActorLocation() + GetActorForwardVector().GetSafeNormal() * 5.0f);

	if (OtherActor && GetOwner() && OtherActor != GetOwner() && OtherActor->GetOwner() != GetOwner())
	{
		UGameplayStatics::ApplyDamage(OtherActor, BaseDamage * DamageMultiplier, GetOwner()->GetInstigatorController(), this, DamageType);
		EPhysicalSurface PhysicalSurface = DetectCollidedPhysicalSurface();

		FString DebugString = "OtherActor: " + OtherActor->GetFName().ToString() + "\n OtherComponent: " + OtherComp->GetFName().ToString()
			+ "\n SurfaceType : " + FString::FromInt(PhysicalSurface);

		//DrawDebugString(GetWorld(), OtherActor->GetActorLocation() + FVector(0.0f, 0.0f, 0.0f), DebugString, NULL, FColor::Yellow, 3.0f, true, 1.0f);

		//DrawDebugSphere(GetWorld(), GetActorLocation(), 20.0f, 12, FColor::Red, false, 2.0f);

		ACharacter* OtherCharacter = Cast<ACharacter>(OtherActor);

		//Check if it is an object possessed by a character such a shield or sword
		if (!OtherCharacter && OtherActor->GetOwner()) { OtherCharacter = Cast<ACharacter>(OtherActor->GetOwner()); }

		if (OtherCharacter && PhysicalSurface == 0) { PhysicalSurface = SURFACE_FLESH; }

		if (PhysicalSurface == SURFACE_FLESH_CRITICAL) { DamageMultiplier = 5.0f; }

		PlayImpactEffects(PhysicalSurface, OverlappedComponent->GetComponentLocation());

		if (OtherCharacter)
		{
			//AttachToComponent(OtherCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			Destroy();
		}

		CollisionComp->SetSimulatePhysics(false);
		DisableComponentsSimulatePhysics();
	}

}

void ACSProjectile::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{
	UNiagaraSystem* ImpactEffect;
	USoundBase* SoundEffect;

	switch (SurfaceType)
	{
	case SURFACE_FLESH:
		ImpactEffect = FleshImpactEffect;
		SoundEffect = FleshImpactSound;
		break;
	case SURFACE_FLESH_CRITICAL:
		ImpactEffect = FleshImpactEffect;
		SoundEffect = FleshImpactSound;
		break;

	default:
		ImpactEffect = DefaultImpactEffect;
		SoundEffect = DefaultImpactSound;
		break;
	}

	if (ImpactEffect) {
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactEffect, ImpactPoint);
	}

	if (SoundEffect) {
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), SoundEffect, ImpactPoint);
	}
}

void ACSProjectile::SetCanBeDestroyed()
{
	CanBeDestroyed = true;
}

EPhysicalSurface ACSProjectile::DetectCollidedPhysicalSurface()
{
	FVector Offset = CollisionComp->GetForwardVector().GetSafeNormal() * 20.0f;
	FVector TraceStart = GetActorLocation() - Offset;
	FVector TraceEnd = CollisionComp->GetComponentLocation() - Offset + CollisionComp->GetForwardVector().GetSafeNormal() * 40.0f;

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
	return MeshComp;
}

void ACSProjectile::SetDamageMultiplier(float NewDamageMultiplier)
{
	DamageMultiplier = NewDamageMultiplier;
}

UBoxComponent* ACSProjectile::GetCollisionComponent() const
{
	return CollisionComp;
}

