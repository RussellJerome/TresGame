// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEXSEADAnimNotify_ChangeAudioVolumeEnable.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAnimNotify_ChangeAudioVolumeEnable : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_ChangeAudioVolumeEnable")
	FString AudioVolumeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_ChangeAudioVolumeEnable")
	bool bEnable;
};
