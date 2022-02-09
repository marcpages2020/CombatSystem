// Fill out your copyright notice in the Description page of Project Settings.

#include "CSShield.h"
#include "CSWeapon.h"
#include "Components/BoxComponent.h"

// Sets default values
ACSShield::ACSShield()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void ACSShield::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACSShield::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

