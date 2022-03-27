// Fill out your copyright notice in the Description page of Project Settings.

#include "CSWeapon.h"
#include "CSCharacter.h"
#include "Components/CSCameraManagerComponent.h"

#include "DrawDebugHelpers.h"

// Sets default values
ACSWeapon::ACSWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void ACSWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void ACSWeapon::PlayImpactEffects(EPhysicalSurface SurfaceType, FVector ImpactPoint)
{}

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

