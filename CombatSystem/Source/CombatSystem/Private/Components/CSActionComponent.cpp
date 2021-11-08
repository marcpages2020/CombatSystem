// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CSActionComponent.h"
#include "Actions/CSAction.h"
#include "Actions/CSAction_Attack.h"

// Sets default values for this component's properties
UCSActionComponent::UCSActionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Create all actions
	Attack = CreateDefaultSubobject<UCSAction_Attack>(TEXT("Attack"));
	AddAction(Attack, ActionType::ATTACK);
}


void UCSActionComponent::AddAction(UCSAction* Action, ActionType Type)
{
	Actions.Insert(Action, (int32)Type);
}

// Called when the game starts
void UCSActionComponent::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UCSActionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (CurrentAction != nullptr) 
	{
		CurrentAction->UpdateAction(DeltaTime);
	}
}

void UCSActionComponent::RequestAction(ActionType Type)
{
	if (Actions[(int32)Type] != nullptr)
	{
		Actions[(int32)Type]->RequestAction();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Trying to request an action which has not been added yet or couldn't be added properly, please add it in the constructor or check for errors"));
	}
}

void UCSActionComponent::StartAction(ActionType Type)
{
	if (Actions[(int32)Type] != nullptr)
	{
		//UE_LOG(LogTemp, Log, TEXT("Action Started"));
		Actions[(int32)Type]->StartAction();
		CurrentAction = Actions[(int32)Type];
	}
}

void UCSActionComponent::StopAction(ActionType Type)
{
	if (Actions[(int32)Type] != nullptr)
	{
		//UE_LOG(LogTemp, Log, TEXT("Action Stopped"));
		Actions[(int32)Type]->StopAction();
		CurrentAction = nullptr;
	}
}

bool UCSActionComponent::IsActionRequested(ActionType Type)
{
	if (Actions[(int32)Type] != nullptr)
	{
		return Actions[(int32)Type]->ActionRequested;
	}
	else
	{
		return false;
	}
}

