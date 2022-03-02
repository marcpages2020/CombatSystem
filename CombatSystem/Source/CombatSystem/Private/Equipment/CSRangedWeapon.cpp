// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipment/CSRangedWeapon.h"
#include "CSProjectile.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACSRangedWeapon::ACSRangedWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void ACSRangedWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACSRangedWeapon::Shoot(FVector ControlForwardVector)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	FVector SpawnPosition = GetActorLocation() + GetActorForwardVector() * 20.0f;
	FVector DestinationLocation = ControlForwardVector * 2000.0f + FVector(0.0f, 0.0f, 200.0f);
	FVector DirectionVector = DestinationLocation - SpawnPosition;

	ACSProjectile* Projectile = GetWorld()->SpawnActor<ACSProjectile>(DefaultProjectileClass, SpawnPosition, DirectionVector.ToOrientationRotator(), SpawnParams);
	UStaticMeshComponent* ProjectileMesh = Projectile->GetMesh();
	if (ProjectileMesh)
	{		
		DrawDebugSphere(GetWorld(), SpawnPosition, 10.0f, 12, FColor::Green, false, 2.0f);
		DrawDebugSphere(GetWorld(), DestinationLocation, 10.0f, 12, FColor::Red, false, 2.0f);

		ProjectileMesh->AddImpulse(DirectionVector.GetSafeNormal() * MaxShootImpulse);
	}
}

// Called every frame
//void ACSRangedWeapon::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

