// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SQEXSEADAnimNotifyState_AttachSound.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAnimNotifyState_AttachSound : public UAnimNotifyState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	class USoundBase* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	float VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	float PitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	float StartWaitTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	float FadeInDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	float FadeOutDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	bool bFollow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	FName AttachPointName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	class USoundBase* LoopEndSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	float LoopEndSoundVolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	float LoopEndSoundPitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotifyState_AttachSound")
	bool bFollowOwnerVisible;
};
