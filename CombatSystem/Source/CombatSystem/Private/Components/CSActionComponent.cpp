// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CSActionComponent.h"
#include "Actions/CSAction.h"
#include "Actions/CSAction_Attack.h"
#include "Actions/CSAction_Dodge.h"
#include "CSCharacter.h"

// Sets default values for this component's properties
UCSActionComponent::UCSActionComponent()
{
	Character = Cast<ACSCharacter>(GetOwner());

	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UCSActionComponent::BeginPlay()
{
	Super::BeginPlay();

	// Create all actions
	if (DefaultActions.Num() > 0)
	{
		for (TSubclassOf<UCSAction> ActionClass : DefaultActions)
		{
			AddAction(ActionClass);
		}
	}
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

void UCSActionComponent::AddAction(TSubclassOf<UCSAction> ActionClass)
{
	if (!ensure(ActionClass))
	{
		return;
	}

	UCSAction* Action = NewObject<UCSAction>(GetOwner(), ActionClass);

	Actions.Insert(Action, (int32)Action->Type);
	Action->Init(Character, RequestTime);
}

void UCSActionComponent::RequestAction(ActionType Type)
{
	if (DefaultActions.Num() > 0)
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
}

void UCSActionComponent::StartAction(ActionType Type)
{
	if (DefaultActions.Num() > 0)
	{
		if (Actions[(int32)Type] != nullptr)
		{
			//UE_LOG(LogTemp, Log, TEXT("Action Started"));
			Actions[(int32)Type]->StartAction();
			CurrentAction = Actions[(int32)Type];
		}
	}
}

void UCSActionComponent::StopAction(ActionType Type)
{
	if (DefaultActions.Num() > 0)
	{
		if (Actions[(int32)Type] != nullptr)
		{
			//UE_LOG(LogTemp, Log, TEXT("Action Stopped"));
			Actions[(int32)Type]->StopAction();
			CurrentAction = nullptr;
		}
	}
}

bool UCSActionComponent::IsActionRequested(ActionType Type)
{
	if (DefaultActions.Num() > 0)
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
	else
	{
		return false;
	}
}

