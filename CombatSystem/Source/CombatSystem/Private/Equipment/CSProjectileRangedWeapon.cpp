// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipment/CSProjectileRangedWeapon.h"

// Sets default values
ACSProjectileRangedWeapon::ACSProjectileRangedWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ACSProjectileRangedWeapon::BeginPlay()
{
	Super::BeginPlay();
}
