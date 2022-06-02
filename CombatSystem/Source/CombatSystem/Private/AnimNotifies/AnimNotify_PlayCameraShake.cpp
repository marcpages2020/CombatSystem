// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotifies/AnimNotify_PlayCameraShake.h"

UAnimNotify_PlayCameraShake::UAnimNotify_PlayCameraShake() : Super()
{}

void UAnimNotify_PlayCameraShake::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	if (!CameraShake || !MeshComp) { return; }

	AActor* Owner = MeshComp->GetOwner();
	if (!Owner) { return; }
	
	APawn* PawnOwner = Cast<APawn>(Owner);
	if (PawnOwner && PawnOwner->IsPlayerControlled())
	{
		GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(CameraShake, Scale);
	}
}