#include "AtomComponent.h"

class USoundAtomCue;

void UAtomComponent::Stop() {
}

void UAtomComponent::SetVolume(float Volume) {
}

void UAtomComponent::SetSound(USoundAtomCue* NewSound) {
}

void UAtomComponent::SetSelectorLabel(const FString& Selector, const FString& label) {
}

void UAtomComponent::SetPitchMultiplier(float NewPitchMultiplier) {
}

void UAtomComponent::SetPitch(float Pitch) {
}

void UAtomComponent::SetNextBlockIndex(int32 BlockIndex) {
}

void UAtomComponent::SetBusSendLevelOffset(int32 BusId, float LevelOffset) {
}

void UAtomComponent::SetBusSendLevel(int32 BusId, float Level) {
}

void UAtomComponent::SetAisacByName(const FString& ControlName, float ControlValue) {
}

void UAtomComponent::Play(float StartTime) {
}

void UAtomComponent::Pause(bool bPause) {
}

bool UAtomComponent::IsPlaying() {
    return false;
}

bool UAtomComponent::IsPaused() {
    return false;
}

EAtomComponentStatus UAtomComponent::GetStatus() {
    return EAtomComponentStatus::Stop;
}

UAtomComponent::UAtomComponent() {
    this->Sound = NULL;
    this->bAutoDestroy = false;
    this->bStopWhenOwnerDestroyed = true;
    this->bIsUISound = false;
    this->DefaultVolume = 1.00f;
    this->bEnableMultipleSoundPlayback = false;
    this->DefaultSoundObject = NULL;
    this->DefaultBlockIndex = 0;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
}

