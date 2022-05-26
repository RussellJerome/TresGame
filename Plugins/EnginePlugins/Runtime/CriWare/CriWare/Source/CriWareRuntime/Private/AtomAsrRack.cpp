#include "AtomAsrRack.h"

class UAtomAsrRack;

void UAtomAsrRack::SetBusVolumeByName(const FString& BusName, float Volume) {
}

void UAtomAsrRack::SetBusSendLevelByName(const FString& SourceBusName, const FString& DestBusName, float Level) {
}

UAtomAsrRack* UAtomAsrRack::GetDefaultAsrRack() {
    return NULL;
}

UAtomAsrRack* UAtomAsrRack::GetAsrRack(int32 AsrRackId) {
    return NULL;
}

void UAtomAsrRack::DetachDspBusSetting() {
}

void UAtomAsrRack::AttachDspBusSetting(const FString& SettingName) {
}

void UAtomAsrRack::ApplyDspBusSnapshot(const FString& SnapshotName, int32 Milliseconds) {
}

UAtomAsrRack::UAtomAsrRack() {
    this->RackId = -1;
}

