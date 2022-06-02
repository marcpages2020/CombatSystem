// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_PlayCameraShake.generated.h"

/**
 * 
 */
UCLASS(const, hidecategories = Object, collapsecategories, Config = Game, meta = (DisplayName = "Play Sound"))
class COMBATSYSTEM_API UAnimNotify_PlayCameraShake : public UAnimNotify
{
	GENERATED_BODY()
public:
	UAnimNotify_PlayCameraShake();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify", meta = (ExposeOnSpawn = true))
		TSubclassOf<UCameraShakeBase> CameraShake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimNotify", meta = (ExposeOnSpawn = true))
		float Scale;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};
