#include "SQEXSEADAudioVolume.h"
#include "Net/UnrealNetwork.h"
#include "SQEXSEADVolumeComponent.h"

void ASQEXSEADAudioVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASQEXSEADAudioVolume, bEnabled);
    DOREPLIFETIME(ASQEXSEADAudioVolume, EffectPresetNumber);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionVolume);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionLPF);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionFadeInTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionFadeOutTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionLPFFadeInTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, AudioVolumeSoundOcclusionLPFFadeOutTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, ObstructionVolume);
    DOREPLIFETIME(ASQEXSEADAudioVolume, ObstructionLPF);
    DOREPLIFETIME(ASQEXSEADAudioVolume, InternalObstructionVolume);
    DOREPLIFETIME(ASQEXSEADAudioVolume, InternalObstructionLPF);
    DOREPLIFETIME(ASQEXSEADAudioVolume, ObstructionFadeTime);
    DOREPLIFETIME(ASQEXSEADAudioVolume, GroupingID);
}

ASQEXSEADAudioVolume::ASQEXSEADAudioVolume() {
    this->VolumeComponent = CreateDefaultSubobject<USQEXSEADVolumeComponent>(TEXT("VolumeComponent0"));
    this->bEnabled = true;
    this->EffectPresetNumber = 0;
    this->EffectFadeTime = 0.00f;
    this->bEnableZeroOne = false;
    this->ZeroOneSlot = 0;
    this->ZeroOneValue = 0.00f;
    this->ZeroOneFadeTime = 0.00f;
    this->SoundVolume = 1.00f;
    this->SoundFadeInTime = 0.00f;
    this->SoundFadeInCurveNumber = -1;
    this->SoundFadeOutTime = 0.00f;
    this->SoundFadeOutCurveNumber = -1;
    this->bOccludeExteriorAudioVolumeSounds = false;
    this->AudioVolumeSoundOcclusionVolume = 0.00f;
    this->AudioVolumeSoundOcclusionLPF = 0.00f;
    this->AudioVolumeSoundOcclusionFadeInTime = 0.00f;
    this->AudioVolumeSoundOcclusionFadeOutTime = 0.00f;
    this->AudioVolumeSoundOcclusionLPFFadeInTime = 0.00f;
    this->AudioVolumeSoundOcclusionLPFFadeOutTime = 0.00f;
    this->bEnableUnoccludedObstruction = false;
    this->ObstructionVolume = 1.00f;
    this->ObstructionLPF = 1.00f;
    this->InternalObstructionVolume = 1.00f;
    this->InternalObstructionLPF = 1.00f;
    this->ObstructionFadeTime = 0.00f;
    this->Priority = 0.00f;
    this->bUseObstructionParamsSeparatePriority = false;
    this->ObstructionParamsSeparatePriority = 0.00f;
    this->GroupingID = 0;
    this->OverridingAttenuationSettings = NULL;
}

