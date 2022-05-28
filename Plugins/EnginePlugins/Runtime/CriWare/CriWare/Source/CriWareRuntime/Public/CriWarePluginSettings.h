#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriWarePluginSettings.generated.h"

UCLASS(DefaultConfig, Config=Engine)
class CRIWARERUNTIME_API UCriWarePluginSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Config, VisibleDefaultsOnly)
    bool bNoExistCriWareIni;
    
    UPROPERTY(Config, EditAnywhere)
    FString ContentDir;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumBinders;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxBinds;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumLoaders;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxFiles;
    
    UPROPERTY(Config, EditAnywhere)
    bool OutputsLogFileSystem;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_FileAccessThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_DataDecompressionThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_MemoryFileSystemThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_FileAccessThreadPriority;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_DataDecompressionThreadPriority;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_MemoryFileSystemThreadPriority;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxVirtualVoices;
    
    UPROPERTY(Config, EditAnywhere)
    bool UsesInGamePreview;
    
    UPROPERTY(Config, EditAnywhere)
    bool OutputsLogAtom;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumStandardMemoryVoices;
    
    UPROPERTY(Config, EditAnywhere)
    int32 StandardMemoryVoiceNumChannels;
    
    UPROPERTY(Config, EditAnywhere)
    int32 StandardMemoryVoiceSamplingRate;
    
    UPROPERTY(Config, EditAnywhere)
    int32 NumStandardStreamingVoices;
    
    UPROPERTY(Config, EditAnywhere)
    int32 StandardStreamingVoiceNumChannels;
    
    UPROPERTY(Config, EditAnywhere)
    int32 StandardStreamingVoiceSamplingRate;
    
    UPROPERTY(Config, EditAnywhere)
    FString AcfFileName;
    
    UPROPERTY(Config, EditAnywhere)
    float DistanceFactor;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 HcaMxVoiceSamplingRate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 NumHcaMxMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 HcaMxMemoryVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 NumHcaMxStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 HcaMxStreamingVoiceNumChannels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool WASAPI_IsExclusive;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 WASAPI_BitsPerSample;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 WASAPI_SamplingRate;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 WASAPI_NumChannels;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_ServerThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_OutputThreadAffinityMask;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_ServerThreadPriority;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_OutputThreadPriority;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool PS4_UseAudio3d;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_NumberOfAudio3dMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_SamplingRateOfAudio3dMemoryVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_NumberOfAudio3dStreamingVoices;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    int32 PS4_SamplingRateOfAudio3dStreamingVoices;
    
    UPROPERTY(Config, EditAnywhere)
    bool InitializeMana;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableDecodeSkip;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxDecoderHandles;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxManaBPS;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseH264Decoder;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bUseManaStartupMovies;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bWaitForMoviesToComplete;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    bool bMoviesAreSkippable;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    TArray<FString> StartupMovies;
    
    UCriWarePluginSettings();
};

