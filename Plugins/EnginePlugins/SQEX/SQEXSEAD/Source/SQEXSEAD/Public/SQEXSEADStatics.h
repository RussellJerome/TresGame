#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEAD_BGMOptions.h"
#include "UObject/NoExportTypes.h"
#include "SQEXSEADStatics.generated.h"

class USoundAttenuation;
class USoundBase;
class USQEXSEADBGMSlotController;

UCLASS(BlueprintType)
class SQEXSEAD_API USQEXSEADStatics : public UObject {
    GENERATED_BODY()
public:
    USQEXSEADStatics();
    UFUNCTION(BlueprintCallable)
    static void SuspendBGM_OptionalFade(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void SuspendBGM();
    
    UFUNCTION(BlueprintCallable)
    static void StopAllCategorySounds(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllBGM_OptionalFade(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllBGM();
    
    UFUNCTION(BlueprintCallable)
    static void SetSEADAudioVolumeUpdateEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetOverrideAttenuation(USoundAttenuation* OverrideAttenuation);
    
    UFUNCTION(BlueprintCallable)
    static void SetExternalParameter(FName ParamName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetEnableBGMAutoResume(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetEffectPreset(FName PresetName, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigVolumeAllCategory(float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetConfigCategoryVolume(FName CategoryName, float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeBGM_OptionalFade(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ResumeBGM();
    
    UFUNCTION(BlueprintCallable)
    static void ResetOverrideAttenuation();
    
    UFUNCTION(BlueprintCallable)
    static void ResetEffectPreset(float resetFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllCategoryTemporarySettings(float resetFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ResetAllBGM(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void ReadySetPathBGM(FName Name, TAssetPtr<USoundBase> SoundReference);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingBGM(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    static USQEXSEADBGMSlotController* GetPlayingBGMSlotController();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumAudibleSoundsAtLocation(UObject* WorldContextObject, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static USQEXSEADBGMSlotController* GetBGMSlotController(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static USQEXSEADBGMSlotController* CreateBGMSlot(FName Name, FSQEXSEAD_BGMOptions Options);
    
    UFUNCTION(BlueprintCallable)
    static void CategoryCtrl_Suspend(FName CategoryName, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void CategoryCtrl_Stop(FName CategoryName, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void CategoryCtrl_SetVolumeWithLayer(FName CategoryName, int32 LayerIndex, float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void CategoryCtrl_SetVolume(FName CategoryName, float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void CategoryCtrl_SetPitch(FName CategoryName, float Pitch, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void CategoryCtrl_Resume(FName CategoryName, float FadeInTime);
    
    UFUNCTION(BlueprintCallable)
    static float CategoryCtrl_GetVolume(FName CategoryName);
    
    UFUNCTION(BlueprintCallable)
    static void CategoryCtrl_DebugMute(FName CategoryName, bool bToBeMuted, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static void CallEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    static void AutoSeCtrl_SetEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static bool AudioVolumeCtrl_SetEnable(UObject* WorldContextObject, const FString& AudioVolumeActorName, bool bEnable);
    
};

