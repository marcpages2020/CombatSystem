// Fill out your copyright notice in the Description page of Project Settings.


#include "CSWeapon.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

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
	if (OtherActor && CanDamage)
	{
		if (OtherActor != GetOwner())
		{
			UE_LOG(LogTemp, Warning, TEXT("Enemy hit"));
			PlayImpactEffects(EPhysicalSurface::SurfaceType1, OverlappedComponent->GetComponentLocation());
			//OtherActor->Destroy();
		}
	}
}

void ACSWeapon::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
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

void ACSWeapon::EnableDamage()
{
	CanDamage = true;
}

void ACSWeapon::DisableDamage()
{
	CanDamage = false;
}

// Called every frame
void ACSWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
