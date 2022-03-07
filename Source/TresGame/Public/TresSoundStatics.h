// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame.h"
#include "TresSoundStatics.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresSoundStatics : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresGameBlueprintLibrary", meta = (Latent, WorldContext = "WorldContext", LatentInfo = "LatentInfo"))
	static void TresWaitForEndOfFieldVoice(class UObject* WorldContextObject, FLatentActionInfo LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics", meta = (WorldContext = "WorldContextObject"))
	static class UAudioComponent* TresSpawnSound2D_BP(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics")
	static void TresSoundMode_Start(TEnumAsByte<ETresSoundModes> mode) {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics")
	static void TresSoundMode_Reset() {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics")
	static void TresSoundMode_End(TEnumAsByte<ETresSoundModes> mode) {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics")
	static void TresSound_StopRTSounds() {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics")
	static void TresSound_SetEnableAudioVolumeUpdate(bool bEnable) {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics")
	static void TresSound_SetBGVolume(TEnumAsByte<ETresCategoryVolumeLayers> Layer, float Volume, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics", meta = (WorldContext = "WorldContextObject"))
	static int TresSound_GetAudiobleNumSoundsAtLocation(class UObject* WorldContextObject, const FVector& Location) { return  0; };

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics", meta = (WorldContext = "WorldContextObject"))
	static void TresPlaySound2D_BP(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings) {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics", meta = (WorldContext = "WorldContextObject"))
	static void TresPlayFieldVoice(class UObject* WorldContextObject, class UTresFieldVoice* Asset, bool CanSkip) {};

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics", meta = (WorldContext = "WorldContextObject"))
	static FStringAssetReference TresGetWorldStaticBGMAssetReference(class UObject* WorldContextObject, TEnumAsByte<ETresWorldStaticBGMTypes> Type) { return FStringAssetReference::FStringAssetReference(); };

	UFUNCTION(BlueprintCallable, Category = "TresSoundStatics", meta = (WorldContext = "WorldContextObject"))
	static class USoundBase* TresGetWorldStaticBGMAsset(class UObject* WorldContextObject, TEnumAsByte<ETresWorldStaticBGMTypes> Type) { return nullptr; };
};
