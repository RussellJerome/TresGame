// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SQEXSEADAnimNotify_PlaySound.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADAnimNotify_PlaySound : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_PlaySound")
	class USoundBase* Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_PlaySound")
	float VolumeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_PlaySound")
	float PitchMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_PlaySound")
	float FadeInDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_PlaySound")
	bool bFollow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_PlaySound")
	FName AttachPointName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAnimNotify_PlaySound")
	bool bFollowOwnerVisible;
};
