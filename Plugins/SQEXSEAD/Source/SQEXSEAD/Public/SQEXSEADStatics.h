// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADStatics.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADStatics : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SuspendBGM_OptionalFade(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SuspendBGM() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void StopAllCategorySounds(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void StopAllBGM_OptionalFade(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void StopAllBGM() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SetSEADAudioVolumeUpdateEnabled(bool bEnabled) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SetOverrideAttenuation(class USoundAttenuation* OverrideAttenuation) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SetExternalParameter(const FName& ParamName, float Value) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SetEnableBGMAutoResume(bool bIsEnabled) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SetEffectPreset(const FName& PresetName, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SetConfigVolumeAllCategory(float Volume, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void SetConfigCategoryVolume(const FName& CategoryName, float Volume, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void ResumeBGM_OptionalFade(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void ResumeBGM() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void ResetOverrideAttenuation() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void ResetEffectPreset(float resetFadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void ResetAllCategoryTemporarySettings(float resetFadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void ResetAllBGM(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void ReadySetPathBGM(const FName& Name, TAssetPtr<class USoundBase> SoundReference) {};

	UFUNCTION(BlueprintPure, Category = "SQEXSEADStatics")
	static bool IsPlayingBGM(class USoundBase* Sound) { return false; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADStatics")
	static class USQEXSEADBGMSlotController* GetPlayingBGMSlotController() { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADStatics", meta = (WorldContext = "WorldContextObject"))
	static int GetNumAudibleSoundsAtLocation(class UObject* WorldContextObject, const FVector& Location) { return 0; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADStatics")
	static class USQEXSEADBGMSlotController* GetBGMSlotController(const FName& Name) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static class USQEXSEADBGMSlotController* CreateBGMSlot(const FName& Name, const struct FSQEXSEAD_BGMOptions& Options) { return nullptr; };

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void CategoryCtrl_Suspend(const FName& CategoryName, float FadeOutTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void CategoryCtrl_Stop(const FName& CategoryName, float FadeOutTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void CategoryCtrl_SetVolumeWithLayer(const FName& CategoryName, int LayerIndex, float Volume, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void CategoryCtrl_SetVolume(const FName& CategoryName, float Volume, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void CategoryCtrl_SetPitch(const FName& CategoryName, float Pitch, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void CategoryCtrl_Resume(const FName& CategoryName, float FadeInTime) {};

	UFUNCTION(BlueprintPure, Category = "SQEXSEADStatics")
	static float CategoryCtrl_GetVolume(const FName& CategoryName) { return 0.0f; };

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void CategoryCtrl_DebugMute(const FName& CategoryName, bool bToBeMuted, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void CallEvent(const FName& EventName) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics")
	static void AutoSeCtrl_SetEnable(bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADStatics", meta = (WorldContext = "WorldContextObject"))
	static bool AudioVolumeCtrl_SetEnable(class UObject* WorldContextObject, const FString& AudioVolumeActorName, bool bEnable) { return false; };
};
