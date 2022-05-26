#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQEXSEADMusicActor.generated.h"

class UAudioComponent;

UCLASS(MinimalAPI)
class ASQEXSEADMusicActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bAutoPlay: 1;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UAudioComponent* AudioComponent;
    
    ASQEXSEADMusicActor();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetNextSectionIndex(int32 SectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetNextSection(const FString& SectionName);
    
    UFUNCTION(BlueprintCallable)
    void SetModeIndex(int32 ModeIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(const FString& modeName);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeInDuration, float FadeVolumeLevel);
    
    UFUNCTION(BlueprintCallable)
    void BlendModeIndex(int32 ModeIndex, float Rate, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void BlendMode(const FString& modeName, float Rate, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
    
};

