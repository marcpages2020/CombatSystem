// Fill out your copyright notice in the Description page of Project Settings.

#include "CSProjectile.h"
#include "Components/SphereComponent.h"

// Sets default values
ACSProjectile::ACSProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
	RootComponent = MeshComponent;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACSProjectile::BeginPlay()
{
	Super::BeginPlay();
	
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

