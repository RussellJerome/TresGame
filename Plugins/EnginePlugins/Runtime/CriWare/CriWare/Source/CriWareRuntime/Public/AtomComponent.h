#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "AtomAisacControlParam.h"
#include "AtomSelectorParam.h"
#include "Sound/SoundAttenuation.h"
#include "EAtomComponentStatus.h"
#include "AtomComponent.generated.h"

class USoundAtomCue;
class USoundAttenuation;
class UAtomSoundObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioFinished);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USoundAtomCue* Sound;
    
    UPROPERTY()
    uint8 bAutoDestroy: 1;
    
    UPROPERTY()
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY()
    uint8 bIsUISound: 1;
    
    UPROPERTY(EditAnywhere)
    float DefaultVolume;
    
    UPROPERTY(EditAnywhere)
    bool bEnableMultipleSoundPlayback;
    
    UPROPERTY(EditAnywhere)
    UAtomSoundObject* DefaultSoundObject;
    
    UPROPERTY(EditAnywhere)
    int32 DefaultBlockIndex;
    
    UPROPERTY(EditAnywhere)
    TArray<FAtomAisacControlParam> DefaultAisacControl;
    
    UPROPERTY(EditAnywhere)
    TArray<FAtomSelectorParam> DefaultSelectorLabel;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSoundAttenuationSettings AttenuationOverrides;
    
    UAtomComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectorLabel(const FString& Selector, const FString& label);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMultiplier(float NewPitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetNextBlockIndex(int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffset(int32 BusId, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevel(int32 BusId, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetAisacByName(const FString& ControlName, float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsPaused();
    
    UFUNCTION(BlueprintCallable)
    EAtomComponentStatus GetStatus();
    
};

