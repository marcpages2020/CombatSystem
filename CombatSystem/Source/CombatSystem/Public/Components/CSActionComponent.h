// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Actions/CSAction.h"

#include "CSActionComponent.generated.h"

class UCSAction;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class COMBATSYSTEM_API UCSActionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCSActionComponent();

protected:
	ACSCharacter* Character;

	UPROPERTY(EditDefaultsOnly, Category = "Actions")
	float RequestTime;

	UPROPERTY(EditAnywhere, Category = "Actions")
	TArray<TSubclassOf<UCSAction>> DefaultActions;

	TArray<UCSAction*> Actions;

	UCSAction* CurrentAction;

	// Called when the game starts
	virtual void BeginPlay() override;

	void AddAction(TSubclassOf<UCSAction> ActionClass);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void RequestAction(ActionType Type);

	UFUNCTION(BlueprintCallable)
	void StartAction(ActionType Type);

	UFUNCTION(BlueprintCallable)
	void StopAction(ActionType Type);

	UFUNCTION(BlueprintCallable)
	bool IsActionRequested(ActionType Type);
};