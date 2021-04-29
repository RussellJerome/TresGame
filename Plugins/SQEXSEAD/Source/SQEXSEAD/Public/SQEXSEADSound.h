// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundWave.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADSoundBank.h"
#include "SQEXSEADSound.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, hidecategories = (Object))
class SQEXSEAD_API USQEXSEADSound : public USoundWave
{
	GENERATED_BODY()
public:
	UPROPERTY()
	TArray<uint8> Data;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bUseKohrogiAttenuation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	class USQEXSEADSoundBank* ReferenceBank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	int SoundIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bOverrideStopFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	float StopFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bIsUISound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bIgnoreEnginePause;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	float PauseFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bIgnoreAudioVolumeAttenuation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bIgnoreObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	bool bEnableSEADTracingOcclusion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	TEnumAsByte<ECollisionChannel> SEADOcclusionTraceChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADSound")
	TEnumAsByte<ESQEXSEADSoundOutputPort> SEADSoundOutputPort;
};
