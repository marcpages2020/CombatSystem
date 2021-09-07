// Fill out your copyright notice in the Description page of Project Settings.

#include "CSCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ACSCharacter::ACSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void ACSCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACSCharacter::MoveForward(float Value)
{
	AddMovementInput(GetActorForwardVector() * Value);
}

void ACSCharacter::MoveRight(float Value)
{
	AddMovementInput(GetActorRightVector() * Value);
}

// Called every frame
void ACSCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACSCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &ACSCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ACSCharacter::AddControllerYawInput);
}

