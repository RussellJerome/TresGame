#include "SoundAtomCueSheet.h"

class USoundAtomCueSheet;

void USoundAtomCueSheet::ReleaseAcb(FName AcbName) {
}

USoundAtomCueSheet* USoundAtomCueSheet::LoadAcb(FName AcbName) {
    return NULL;
}

void USoundAtomCueSheet::DetachDspBusSetting() {
}

void USoundAtomCueSheet::AttachDspBusSetting(const FString& SettingName) {
}

void USoundAtomCueSheet::ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds) {
}

USoundAtomCueSheet::USoundAtomCueSheet() {
    this->Contains = false;
    this->bOverrideAwbDirectory = false;
}

