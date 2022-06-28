#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEAD_Timing.h"
#include "SQEXSEAD_BGMOptions.h"
#include "ESQEXSEAD_BGMStoreBehaviour.h"
#include "SQEXSEADBGMSlotController.generated.h"

class USQEXSEADBGMSlot;
class USoundBase;

UCLASS(BlueprintType)
class SQEXSEAD_API USQEXSEADBGMSlotController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    USQEXSEADBGMSlot* Slot_;
    
public:
    USQEXSEADBGMSlotController();
    UFUNCTION(BlueprintCallable)
    void Unreference();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSuspendSilent();
    
    UFUNCTION(BlueprintCallable)
    void SetSuspendFadeOutTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStoreBehaviour(ESQEXSEAD_BGMStoreBehaviour StoreBehaviour);
    
    UFUNCTION(BlueprintCallable)
    void SetStopFadeOutTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetStaySuspendTime(float StaySuspendTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSilent();
    
    UFUNCTION(BlueprintCallable)
    void SetSeekTime(float SeekTime);
    
    UFUNCTION(BlueprintCallable)
    void SetSection(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetResumeFadeInTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetRestoreAfterFinish(bool bRestoreAfterFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayFadeInTime(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPath(TAssetPtr<USoundBase> SoundReference);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(FSQEXSEAD_BGMOptions NewOptions);
    
    UFUNCTION(BlueprintCallable)
    void SetModeByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultOptions(FSQEXSEAD_BGMOptions NewOptions);
    
    UFUNCTION(BlueprintCallable)
    void Set(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefaultOptions(FSQEXSEAD_BGMOptions NewOptions);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Ready();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    bool IsSuspended();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    float GetTempo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSectionIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNextSectionIndex();
    
    UFUNCTION(BlueprintCallable)
    FSQEXSEAD_Timing GetNearTiming();
    
    UFUNCTION(BlueprintCallable)
    float GetMusicalTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetModeIndex();
    
    UFUNCTION(BlueprintCallable)
    FSQEXSEAD_Timing GetJustTiming();
    
};

