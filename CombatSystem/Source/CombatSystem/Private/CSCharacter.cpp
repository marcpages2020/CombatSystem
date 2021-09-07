// Fill out your copyright notice in the Description page of Project Settings.

#include "CSCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/Controller.h"
#include "DrawDebugHelpers.h"

// Sets default values
ACSCharacter::ACSCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bUsePawnControlRotation = true;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
	CameraComp->bUsePawnControlRotation = false;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);

	TurnRate = 45.0f;
	LookRate = 45.0f;
}

// Called when the game starts or when spawned
void ACSCharacter::BeginPlay()
{
	Super::BeginPlay();

}

void ACSCharacter::MoveForward(float Value)
{
	if (Controller != nullptr && Value != 0.0f)
	{
		//AddMovementInput(GetActorForwardVector() * Value);
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);
		const FVector direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::X);

		AddMovementInput(direction, Value);
	}
}

void ACSCharacter::MoveRight(float Value)
{
	if (Controller != nullptr && Value != 0.0f)
	{
		//AddMovementInput(GetActorRightVector() * Value);
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator Yaw(0.0f, Rotation.Yaw, 0.0f);
		FVector direction = FRotationMatrix(Yaw).GetUnitAxis(EAxis::Y);

		AddMovementInput(direction, Value);
	}
}

void ACSCharacter::TurnAtRate(float Rate)
{
	AddControllerYawInput(Rate * GetWorld()->GetDeltaSeconds() * TurnRate);
}

void ACSCharacter::LookUpAtRate(float Rate)
{
	AddControllerPitchInput(Rate * GetWorld()->GetDeltaSeconds() * LookRate);
}

void ACSCharacter::ToggleLockTarget()
{
	TargetLocked = !TargetLocked;

	//Start targeting target
	if (TargetLocked)
	{
		LockTarget();
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Target Unlocked"));
		GetCharacterMovement()->bOrientRotationToMovement = true;
	}
}

void ACSCharacter::LockTarget()
{
	//TODO: Change this for enemy class
	TArray<AActor*> FoundCharacters;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACharacter::StaticClass(), FoundCharacters);

	//Find closest enemy
	float ClosestEnemyDistance = 100000000000.0f;
	ACharacter* ClosestEnemy = nullptr;
	for (size_t i = 0; i < FoundCharacters.Num(); i++)
	{  
		if (FoundCharacters[i] == this)
			continue;

		float distance = FVector::Distance(GetActorLocation(), FoundCharacters[i]->GetActorLocation());
		if (distance < ClosestEnemyDistance)
		{
			ClosestEnemyDistance = distance;
			ClosestEnemy = Cast<ACharacter>(FoundCharacters[i]);
		}
	}

	//If there is an enemy in range lock it
	if (ClosestEnemy != nullptr)
	{
		LockedEnemy = ClosestEnemy;
		UE_LOG(LogTemp, Warning, TEXT("Target Locked: %s"), *LockedEnemy->GetName());
	}
	//If not, stay unlocked
	else
	{
		TargetLocked = false;
	}
}

//Public functions

// Called every frame
void ACSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (TargetLocked && LockedEnemy != nullptr)
	{
		//UE_LOG(LogTemp, Warning, TEXT("Locking"));

		FVector direction = LockedEnemy->GetActorLocation() - GetActorLocation();
		FRotator TargetRotation = UKismetMathLibrary::MakeRotFromXZ(direction, FVector::UpVector);

		float dot = FVector::DotProduct(CameraComp->GetForwardVector(), direction.GetSafeNormal());
		if(dot != 1.0f)
			UE_LOG(LogTemp, Warning, TEXT("Dot: %f"), dot);

		FRotator InterpolatedRotation = FMath::RInterpTo(CameraComp->GetComponentRotation(), TargetRotation, GetWorld()->GetDeltaSeconds(), 5.0f);

		SetActorRotation(InterpolatedRotation);
		GetController()->SetControlRotation(InterpolatedRotation);

		//DrawDebugLine(GetWorld(), GetActorLocation() + FVector::UpVector, FVector(direction + FVector::UpVector), FColor::Yellow, false, 0.1f, 0, 1.0f);
	}
}

// Called to bind functionality to input
void ACSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACSCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &ACSCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ACSCharacter::AddControllerYawInput);

	PlayerInputComponent->BindAxis("LookUpRate", this, &ACSCharacter::LookUpAtRate);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACSCharacter::TurnAtRate);

	PlayerInputComponent->BindAction("LockTarget", IE_Pressed, this, &ACSCharacter::ToggleLockTarget);
}

