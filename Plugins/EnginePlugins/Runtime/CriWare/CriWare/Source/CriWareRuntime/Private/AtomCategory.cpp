#include "AtomCategory.h"

void UAtomCategory::SetVolumeByName(const FString& CategoryName, float Volume) {
}

void UAtomCategory::SetAisacControlByName(const FString& CategoryName, const FString& AisacName, float Value) {
}

void UAtomCategory::PauseByName(const FString& CategoryName, bool bPause) {
}

bool UAtomCategory::IsPausedByName(const FString& CategoryName) {
    return false;
}

float UAtomCategory::GetVolumeByName(const FString& CategoryName) {
    return 0.0f;
}

UAtomCategory::UAtomCategory() {
}

