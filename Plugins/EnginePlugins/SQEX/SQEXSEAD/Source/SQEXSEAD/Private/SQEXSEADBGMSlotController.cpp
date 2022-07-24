#include "SQEXSEADBGMSlotController.h"

class USoundBase;

void USQEXSEADBGMSlotController::Unreference() {
}

void USQEXSEADBGMSlotController::Stop() {
}

void USQEXSEADBGMSlotController::SetVolume(float Volume, float FadeTime) {
}

void USQEXSEADBGMSlotController::SetSuspendSilent() {
}

void USQEXSEADBGMSlotController::SetSuspendFadeOutTime(float FadeTime) {
}

void USQEXSEADBGMSlotController::SetStoreBehaviour(ESQEXSEAD_BGMStoreBehaviour StoreBehaviour) {
}

void USQEXSEADBGMSlotController::SetStopFadeOutTime(float FadeTime) {
}

void USQEXSEADBGMSlotController::SetStaySuspendTime(float StaySuspendTime) {
}

void USQEXSEADBGMSlotController::SetSilent() {
}

void USQEXSEADBGMSlotController::SetSeekTime(float SeekTime) {
}

void USQEXSEADBGMSlotController::SetSection(int32 Index) {
}

void USQEXSEADBGMSlotController::SetResumeFadeInTime(float FadeTime) {
}

void USQEXSEADBGMSlotController::SetRestoreAfterFinish(bool bRestoreAfterFinish) {
}

void USQEXSEADBGMSlotController::SetPriority(int32 Priority) {
}

void USQEXSEADBGMSlotController::SetPlayFadeInTime(float FadeTime) {
}

void USQEXSEADBGMSlotController::SetPath(TAssetPtr<USoundBase> SoundReference) {
}

void USQEXSEADBGMSlotController::SetOptions(FSQEXSEAD_BGMOptions NewOptions) {
}

void USQEXSEADBGMSlotController::SetModeByName(FName Name) {
}

void USQEXSEADBGMSlotController::SetMode(int32 Index) {
}

void USQEXSEADBGMSlotController::SetDefaultOptions(FSQEXSEAD_BGMOptions NewOptions) {
}

void USQEXSEADBGMSlotController::Set(USoundBase* Sound) {
}

void USQEXSEADBGMSlotController::ResetToDefaultOptions(FSQEXSEAD_BGMOptions NewOptions) {
}

void USQEXSEADBGMSlotController::Reset() {
}

void USQEXSEADBGMSlotController::Ready() {
}

void USQEXSEADBGMSlotController::Play() {
}

bool USQEXSEADBGMSlotController::IsSuspended() {
    return false;
}

bool USQEXSEADBGMSlotController::IsPlaying() {
    return false;
}

float USQEXSEADBGMSlotController::GetTempo() {
    return 0.0f;
}

int32 USQEXSEADBGMSlotController::GetSectionIndex() {
    return 0;
}

int32 USQEXSEADBGMSlotController::GetNextSectionIndex() {
    return 0;
}

FSQEXSEAD_Timing USQEXSEADBGMSlotController::GetNearTiming() {
    return FSQEXSEAD_Timing{};
}

float USQEXSEADBGMSlotController::GetMusicalTime() {
    return 0.0f;
}

int32 USQEXSEADBGMSlotController::GetModeIndex() {
    return 0;
}

FSQEXSEAD_Timing USQEXSEADBGMSlotController::GetJustTiming() {
    return FSQEXSEAD_Timing{};
}

USQEXSEADBGMSlotController::USQEXSEADBGMSlotController() {
    this->Slot_ = NULL;
}

