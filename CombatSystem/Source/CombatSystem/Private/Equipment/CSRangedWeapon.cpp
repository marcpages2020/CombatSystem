// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipment/CSRangedWeapon.h"
#include "CSProjectile.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "..\..\Public\Equipment\CSRangedWeapon.h"
#include "CSCharacter.h"
#include "../../CombatSystem.h"

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

void ACSRangedWeapon::StartRecoiling()
{
	GetWorldTimerManager().SetTimer(TimerHandle_ChargeTimer, this, &ACSRangedWeapon::OnMaxChargeTimeReached, 5000.0f, false);
}

void ACSRangedWeapon::Shoot()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	FVector SpawnPosition = GetActorLocation() + GetActorForwardVector() * 60.0f;
	FVector DestinationLocation = CalculateProjectileDestination();
	FVector DirectionVector = DestinationLocation - SpawnPosition;

	ACSProjectile* Projectile = GetWorld()->SpawnActor<ACSProjectile>(DefaultProjectileClass, SpawnPosition, Character->GetViewRotation(), SpawnParams);
	Projectile->SetOwner(GetOwner());
	Projectile->SetDamageMultiplier(CalculateDamageMultiplier());

	UStaticMeshComponent* ProjectileMesh = Projectile->GetMesh();
	if (ProjectileMesh)
	{
		//DrawDebugSphere(GetWorld(), SpawnPosition, 10.0f, 12, FColor::Green, false, 2.0f);
		//DrawDebugSphere(GetWorld(), DestinationLocation, 10.0f, 12, FColor::Red, false, 2.0f);

		ProjectileMesh->AddImpulse(DirectionVector.GetSafeNormal() * MaxShootImpulse);
	}
}

float ACSRangedWeapon::CalculateDamageMultiplier()
{
	float ElapsedTime = GetWorldTimerManager().GetTimerElapsed(TimerHandle_ChargeTimer);
	return FMath::Clamp(ElapsedTime / MaxChargeTime, 0.5f, 1.5f);
}

void ACSRangedWeapon::OnMaxChargeTimeReached()
{}

FVector ACSRangedWeapon::CalculateProjectileDestination()
{
	FVector Destination;
	if (Character->IsTargetLocked())
	{
		return Character->GetLockedTarget()->GetActorLocation() + FVector(0.0f, 0.0f, 50.0f);
	}
	else
	{
		FVector TraceStart = Character->GetPawnViewLocation();
		FVector TraceEnd = Character->GetPawnViewLocation() + (Character->GetViewRotation().Vector() * 100000000.0f);

		FCollisionQueryParams QueryParams;
		QueryParams.AddIgnoredActor(this);
		QueryParams.bTraceComplex = true;


		FHitResult HitResult;
		//If a hit point is found, send the arrow there
		if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, COLLISION_WEAPON, QueryParams))
		{
			Destination = HitResult.Location;
			//DrawDebugLine(GetWorld(), TraceStart, Destination, FColor::Green, false, 2.0f, 0u, 2.0f);
		}
		//Send the arrow to the max arrow range
		else
		{
			Destination = Character->GetPawnViewLocation() + (Character->GetViewRotation().Vector() * WeaponRange);
			//DrawDebugLine(GetWorld(), TraceStart, Destination, FColor::Red, false, 2.0f, 0u, 2.0f);
		}
	}

	return Destination;
}
