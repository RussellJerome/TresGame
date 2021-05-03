// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SQEXSEADAudioVolume.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API ASQEXSEADAudioVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	class USQEXSEADVolumeComponent* VolumeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	bool bEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	int EffectPresetNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float EffectFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	FName EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	bool bEnableZeroOne;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	int ZeroOneSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float ZeroOneValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float ZeroOneFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	TArray<class USoundBase*> AudioVolumeSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float SoundVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float SoundFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	int SoundFadeInCurveNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float SoundFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	int SoundFadeOutCurveNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	bool bOccludeExteriorAudioVolumeSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float AudioVolumeSoundOcclusionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float AudioVolumeSoundOcclusionLPF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float AudioVolumeSoundOcclusionFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float AudioVolumeSoundOcclusionFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float AudioVolumeSoundOcclusionLPFFadeInTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float AudioVolumeSoundOcclusionLPFFadeOutTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	bool bEnableUnoccludedObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float ObstructionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float ObstructionLPF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float InternalObstructionVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float InternalObstructionLPF;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float ObstructionFadeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	bool bUseObstructionParamsSeparatePriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	float ObstructionParamsSeparatePriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	int GroupingID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	TArray<class ASQEXSEADAudioVolume*> GroupedAudioVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADAudioVolume")
	class USoundAttenuation* OverridingAttenuationSettings;
};
