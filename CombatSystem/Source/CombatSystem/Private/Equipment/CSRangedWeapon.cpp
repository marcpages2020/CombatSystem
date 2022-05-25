// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipment/CSRangedWeapon.h"

#include "CSCharacter.h"
#include "CSProjectile.h"
#include "Components/BoxComponent.h"
#include "../../CombatSystem.h"

#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

static int32 RangedWeaponDebugDraw = 0;
FAutoConsoleVariableRef CVARRangedWeaponDebugDraw(
	TEXT("CS.RangedWeaponDebugDraw"),
	RangedWeaponDebugDraw,
	TEXT("Draw all ranged weapon debug"),
	ECVF_Cheat);

// Sets default values
ACSRangedWeapon::ACSRangedWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACSRangedWeapon::BeginPlay()
{
	Super::BeginPlay();
}

void ACSRangedWeapon::StartRecoiling()
{
	GetWorldTimerManager().SetTimer(TimerHandle_ChargeTimer, this, &ACSRangedWeapon::OnMaxChargeTimeReached, 5000.0f, false);

	if (RecoilSound)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), RecoilSound, GetActorLocation());
	}
}

void ACSRangedWeapon::Shoot()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	FVector SpawnPosition = MeshComp->GetSocketLocation("ProjectileSocket");
	FVector DestinationLocation = CalculateProjectileDestination();
	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(SpawnPosition, DestinationLocation);

	ACSProjectile* Projectile = GetWorld()->SpawnActor<ACSProjectile>(DefaultProjectileClass, SpawnPosition, LookAtRotation, SpawnParams);
	if (Projectile)
	{
		Projectile->SetOwner(GetOwner());
		Projectile->SetDamageMultiplier(CalculateDamageMultiplier());

		UBoxComponent* ProjectileCollisionComponent = Projectile->GetCollisionComponent();
		if (ProjectileCollisionComponent)
		{
			if (RangedWeaponDebugDraw > 0)
			{
				DrawDebugSphere(GetWorld(), SpawnPosition, 5.0f, 12, FColor::Green, false, 2.0f);
				DrawDebugLine(GetWorld(), SpawnPosition, DestinationLocation, FColor::Red, false, 1.0f, 0u, 1.0f);

				DrawDebugLine(GetWorld(), SpawnPosition, SpawnPosition + Projectile->GetActorForwardVector().GetSafeNormal() * 50.0f, FColor::Red, false, 2.5f, 0u, 1.0f);
				DrawDebugSphere(GetWorld(), DestinationLocation, 5.0f, 12, FColor::Red, false, 2.0f);
			}


			if (ShootSound) { UGameplayStatics::PlaySoundAtLocation(GetWorld(), ShootSound, GetActorLocation()); }

			if (ProjectileCollisionComponent->IsSimulatingPhysics())
			{
				float ElapsedTime = GetWorldTimerManager().GetTimerElapsed(TimerHandle_ChargeTimer);
				float ImpulsePercentage = FMath::Clamp(ElapsedTime / MaxChargeTime, 0.15f, 1.0f);
				ProjectileCollisionComponent->AddImpulse(Projectile->GetActorForwardVector().GetSafeNormal() * MaxShootImpulse * ImpulsePercentage);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Trying to shoot a projectile returned null on object: %s"), *GetName())
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
