#include "SQEXSEADSound.h"

USQEXSEADSound::USQEXSEADSound() {
    this->bUseKohrogiAttenuation = false;
    this->ReferenceBank = NULL;
    this->SoundIndex = 0;
    this->bOverrideStopFadeTime = false;
    this->StopFadeTime = 0.50f;
    this->bIsUISound = false;
    this->bIgnoreEnginePause = false;
    this->PauseFadeTime = 0.00f;
    this->bIgnoreAudioVolumeAttenuation = false;
    this->bIgnoreObstruction = false;
    this->bEnableSEADTracingOcclusion = false;
    this->SEADOcclusionTraceChannel = ECC_Visibility;
    this->SEADSoundOutputPort = ESQEXSEADSoundOutputPort::AUTO;
}

