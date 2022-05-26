#include "SQEXSEADZeroOneSeComponent.h"

void USQEXSEADZeroOneSeComponent::Stop() {
}

void USQEXSEADZeroOneSeComponent::SetZeroOneValue(int32 Slot, float Value, float FadeTime) {
}

void USQEXSEADZeroOneSeComponent::Play() {
}

bool USQEXSEADZeroOneSeComponent::IsPlaying() {
    return false;
}

USQEXSEADZeroOneSeComponent::USQEXSEADZeroOneSeComponent() {
    this->SoundAsset = NULL;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->OnStopSoundAsset = NULL;
    this->AudioStartTiming = ESQEXSEADAudioStartTimings::None;
    this->bEnable_Slot0 = false;
    this->PropertyType_Slot0 = ESQEXSEADZeroOneProperties::None;
    this->ZeroOneFadeTime_Slot0 = 0.00f;
    this->ValiableValueThreshold_Slot0 = 0.00f;
    this->bEnable_Slot1 = false;
    this->PropertyType_Slot1 = ESQEXSEADZeroOneProperties::None;
    this->ZeroOneFadeTime_Slot1 = 0.00f;
    this->ValiableValueThreshold_Slot1 = 0.00f;
    this->MyAudioComponent = NULL;
}

