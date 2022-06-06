#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundWave.h"
#include "ESQEXSEADSoundOutputPort.h"
#include "Engine/EngineTypes.h"
#include "SQEXSEADSound.generated.h"

class USQEXSEADSoundBank;

UCLASS(EditInlineNew, MinimalAPI)
class USQEXSEADSound : public USoundWave {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bUseKohrogiAttenuation;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly)
    USQEXSEADSoundBank* ReferenceBank;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly)
    int32 SoundIndex;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bOverrideStopFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float StopFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bIsUISound;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bIgnoreEnginePause;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    float PauseFadeTime;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bIgnoreAudioVolumeAttenuation;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bIgnoreObstruction;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    bool bEnableSEADTracingOcclusion;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<ECollisionChannel> SEADOcclusionTraceChannel;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere)
    TEnumAsByte<ESQEXSEADSoundOutputPort::Type> SEADSoundOutputPort;
    
    USQEXSEADSound();
};

