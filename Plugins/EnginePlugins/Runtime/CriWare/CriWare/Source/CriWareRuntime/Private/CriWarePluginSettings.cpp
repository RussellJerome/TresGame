#include "CriWarePluginSettings.h"

UCriWarePluginSettings::UCriWarePluginSettings() {
    this->bNoExistCriWareIni = false;
    this->ContentDir = TEXT("CriMovie");
    this->NumBinders = 16;
    this->MaxBinds = 16;
    this->NumLoaders = 16;
    this->MaxFiles = 16;
    this->OutputsLogFileSystem = false;
    this->PS4_FileAccessThreadAffinityMask = 126;
    this->PS4_DataDecompressionThreadAffinityMask = 126;
    this->PS4_MemoryFileSystemThreadAffinityMask = 126;
    this->PS4_FileAccessThreadPriority = 500;
    this->PS4_DataDecompressionThreadPriority = 730;
    this->PS4_MemoryFileSystemThreadPriority = 720;
    this->MaxVirtualVoices = 32;
    this->UsesInGamePreview = false;
    this->OutputsLogAtom = false;
    this->NumStandardMemoryVoices = 16;
    this->StandardMemoryVoiceNumChannels = 2;
    this->StandardMemoryVoiceSamplingRate = 48000;
    this->NumStandardStreamingVoices = 8;
    this->StandardStreamingVoiceNumChannels = 2;
    this->StandardStreamingVoiceSamplingRate = 48000;
    this->DistanceFactor = 1.00f;
    this->HcaMxVoiceSamplingRate = 48000;
    this->NumHcaMxMemoryVoices = 0;
    this->HcaMxMemoryVoiceNumChannels = 6;
    this->NumHcaMxStreamingVoices = 0;
    this->HcaMxStreamingVoiceNumChannels = 6;
    this->WASAPI_IsExclusive = false;
    this->WASAPI_BitsPerSample = 24;
    this->WASAPI_SamplingRate = 48000;
    this->WASAPI_NumChannels = 6;
    this->PS4_ServerThreadAffinityMask = 126;
    this->PS4_OutputThreadAffinityMask = 126;
    this->PS4_ServerThreadPriority = 400;
    this->PS4_OutputThreadPriority = 300;
    this->PS4_UseAudio3d = false;
    this->PS4_NumberOfAudio3dMemoryVoices = 16;
    this->PS4_SamplingRateOfAudio3dMemoryVoices = 48000;
    this->PS4_NumberOfAudio3dStreamingVoices = 8;
    this->PS4_SamplingRateOfAudio3dStreamingVoices = 48000;
    this->InitializeMana = true;
    this->EnableDecodeSkip = false;
    this->MaxDecoderHandles = 4;
    this->MaxManaBPS = 0;
    this->UseH264Decoder = true;
    this->bUseManaStartupMovies = false;
    this->bWaitForMoviesToComplete = false;
    this->bMoviesAreSkippable = false;
}

