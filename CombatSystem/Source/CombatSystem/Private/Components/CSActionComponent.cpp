// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CSActionComponent.h"
#include "Actions/CSCharacterState.h"
#include "Actions/CSCharacterState_Attack.h"
#include "Actions/CSCharacterState_Dodge.h"
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
	/*
	for (TSubclassOf<UCSCharacterState> ActionClass : DefaultActions)
	{
		AddAction(ActionClass);
	}
	*/
}


// Called every frame
void UCSActionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	/*
	if (CurrentAction != nullptr)
	{
		CurrentAction->UpdateAction(DeltaTime);
	}
	*/
}

/*
void UCSActionComponent::AddAction(TSubclassOf<UCSCharacterState> ActionClass)
{
	if (!ensure(ActionClass))
	{
		return;
	}

	UCSCharacterState* NewAction = NewObject<UCSCharacterState>(GetOwner(), ActionClass);
	if (ensure(NewAction))
	{
		Actions.Add(NewAction->Type, NewAction);
		NewAction->Init(Character, RequestTime);
	}
}

void UCSActionComponent::RequestAction(ActionType Type)
{
	if (Actions.Contains(Type))
	{
		if (Actions[Type] != nullptr)
		{
			Actions[Type]->RequestAction();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Trying to request an action which has not been added yet or couldn't be added properly, please add it in the constructor or check for errors"));
		}
	}
}

void UCSActionComponent::StartAction(ActionType Type)
{
	if (Actions.Contains(Type))
	{
		if (Actions[Type] != nullptr)
		{
			//UE_LOG(LogTemp, Log, TEXT("Action Started"));
			Actions[Type]->StartAction();
			CurrentAction = Actions[Type];
		}
	}
}

void UCSActionComponent::StopAction(ActionType Type)
{
	if (Actions.Contains(Type))
	{
		if (Actions[Type] != nullptr)
		{
			//UE_LOG(LogTemp, Log, TEXT("Action Stopped"));
			Actions[Type]->StopAction();
		}
	}

	CurrentAction = nullptr;
}

bool UCSActionComponent::IsStateRequested(ActionType Type)
{
	if (Actions.Contains(Type))
	{
		if (Actions[Type] != nullptr)
		{
			return Actions[Type]->ActionRequested;
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
*/

