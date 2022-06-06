#include "SQEXSEADMusicActor.h"
#include "Components/AudioComponent.h"

void ASQEXSEADMusicActor::Stop() {
}

void ASQEXSEADMusicActor::SetNextSectionIndex(int32 SectionIndex) {
}

void ASQEXSEADMusicActor::SetNextSection(const FString& SectionName) {
}

void ASQEXSEADMusicActor::SetModeIndex(int32 ModeIndex) {
}

void ASQEXSEADMusicActor::SetMode(const FString& modeName) {
}

void ASQEXSEADMusicActor::Play(float StartTime) {
}

void ASQEXSEADMusicActor::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
}

void ASQEXSEADMusicActor::FadeIn(float FadeInDuration, float FadeVolumeLevel) {
}

void ASQEXSEADMusicActor::BlendModeIndex(int32 ModeIndex, float Rate, float FadeTime) {
}

void ASQEXSEADMusicActor::BlendMode(const FString& modeName, float Rate, float FadeTime) {
}

void ASQEXSEADMusicActor::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
}

ASQEXSEADMusicActor::ASQEXSEADMusicActor() {
    this->bAutoPlay = true;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent0"));
}

