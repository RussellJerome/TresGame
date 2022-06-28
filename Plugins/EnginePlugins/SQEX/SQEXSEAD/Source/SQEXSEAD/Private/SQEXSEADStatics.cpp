#include "SQEXSEADStatics.h"

class UObject;
class USoundAttenuation;
class USoundBase;
class USQEXSEADBGMSlotController;

void USQEXSEADStatics::SuspendBGM_OptionalFade(float FadeTime) {
}

void USQEXSEADStatics::SuspendBGM() {
}

void USQEXSEADStatics::StopAllCategorySounds(float FadeTime) {
}

void USQEXSEADStatics::StopAllBGM_OptionalFade(float FadeTime) {
}

void USQEXSEADStatics::StopAllBGM() {
}

void USQEXSEADStatics::SetSEADAudioVolumeUpdateEnabled(bool bEnabled) {
}

void USQEXSEADStatics::SetOverrideAttenuation(USoundAttenuation* OverrideAttenuation) {
}

void USQEXSEADStatics::SetExternalParameter(FName ParamName, float Value) {
}

void USQEXSEADStatics::SetEnableBGMAutoResume(bool bIsEnabled) {
}

void USQEXSEADStatics::SetEffectPreset(FName PresetName, float FadeTime) {
}

void USQEXSEADStatics::SetConfigVolumeAllCategory(float Volume, float FadeTime) {
}

void USQEXSEADStatics::SetConfigCategoryVolume(FName CategoryName, float Volume, float FadeTime) {
}

void USQEXSEADStatics::ResumeBGM_OptionalFade(float FadeTime) {
}

void USQEXSEADStatics::ResumeBGM() {
}

void USQEXSEADStatics::ResetOverrideAttenuation() {
}

void USQEXSEADStatics::ResetEffectPreset(float resetFadeTime) {
}

void USQEXSEADStatics::ResetAllCategoryTemporarySettings(float resetFadeTime) {
}

void USQEXSEADStatics::ResetAllBGM(float FadeTime) {
}

void USQEXSEADStatics::ReadySetPathBGM(FName Name, TAssetPtr<USoundBase> SoundReference) {
}

bool USQEXSEADStatics::IsPlayingBGM(USoundBase* Sound) {
    return false;
}

USQEXSEADBGMSlotController* USQEXSEADStatics::GetPlayingBGMSlotController() {
    return NULL;
}

int32 USQEXSEADStatics::GetNumAudibleSoundsAtLocation(UObject* WorldContextObject, FVector Location) {
    return 0;
}

USQEXSEADBGMSlotController* USQEXSEADStatics::GetBGMSlotController(FName Name) {
    return NULL;
}

USQEXSEADBGMSlotController* USQEXSEADStatics::CreateBGMSlot(FName Name, FSQEXSEAD_BGMOptions Options) {
    return NULL;
}

void USQEXSEADStatics::CategoryCtrl_Suspend(FName CategoryName, float FadeOutTime) {
}

void USQEXSEADStatics::CategoryCtrl_Stop(FName CategoryName, float FadeOutTime) {
}

void USQEXSEADStatics::CategoryCtrl_SetVolumeWithLayer(FName CategoryName, int32 LayerIndex, float Volume, float FadeTime) {
}

void USQEXSEADStatics::CategoryCtrl_SetVolume(FName CategoryName, float Volume, float FadeTime) {
}

void USQEXSEADStatics::CategoryCtrl_SetPitch(FName CategoryName, float Pitch, float FadeTime) {
}

void USQEXSEADStatics::CategoryCtrl_Resume(FName CategoryName, float FadeInTime) {
}

float USQEXSEADStatics::CategoryCtrl_GetVolume(FName CategoryName) {
    return 0.0f;
}

void USQEXSEADStatics::CategoryCtrl_DebugMute(FName CategoryName, bool bToBeMuted, float FadeTime) {
}

void USQEXSEADStatics::CallEvent(FName EventName) {
}

void USQEXSEADStatics::AutoSeCtrl_SetEnable(bool Enable) {
}

bool USQEXSEADStatics::AudioVolumeCtrl_SetEnable(UObject* WorldContextObject, const FString& AudioVolumeActorName, bool bEnable) {
    return false;
}

USQEXSEADStatics::USQEXSEADStatics() {
}

