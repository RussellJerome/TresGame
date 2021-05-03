// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEAD_StructsAndEnums.h"
#include "SQEXSEADBGMSlotController.generated.h"

/**
 * 
 */
UCLASS()
class SQEXSEAD_API USQEXSEADBGMSlotController : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SQEXSEADBGMSlotController")
	class USQEXSEADBGMSlot* Slot_;

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void Unreference() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void Stop() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetVolume(float Volume, float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetSuspendSilent() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetSuspendFadeOutTime(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetStoreBehaviour(ESQEXSEAD_BGMStoreBehaviour StoreBehaviour) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetStopFadeOutTime(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetStaySuspendTime(float StaySuspendTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetSilent() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetSeekTime(float SeekTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetSection(int Index) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetResumeFadeInTime(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetRestoreAfterFinish(bool bRestoreAfterFinish) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetPriority(int Priority) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetPlayFadeInTime(float FadeTime) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetPath(TAssetPtr<class USoundBase> SoundReference) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetOptions(const struct FSQEXSEAD_BGMOptions& NewOptions) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetModeByName(const FName& Name) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetMode(int Index) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void SetDefaultOptions(const struct FSQEXSEAD_BGMOptions& NewOptions) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void Set(class USoundBase* Sound) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void ResetToDefaultOptions(const struct FSQEXSEAD_BGMOptions& NewOptions) {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void Reset() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void Ready() {};

	UFUNCTION(BlueprintCallable, Category = "SQEXSEADBGMSlotController")
	void Play() {};

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	bool IsSuspended() { return false; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	bool IsPlaying() { return false; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	float GetTempo() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	int GetSectionIndex() { return 0; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	int GetNextSectionIndex() { return 0; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	struct FSQEXSEAD_Timing GetNearTiming() { return FSQEXSEAD_Timing::FSQEXSEAD_Timing(); };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	float GetMusicalTime() { return 0.0f; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	int GetModeIndex() { return 0; };

	UFUNCTION(BlueprintPure, Category = "SQEXSEADBGMSlotController")
	struct FSQEXSEAD_Timing GetJustTiming() { return FSQEXSEAD_Timing::FSQEXSEAD_Timing(); };
};
