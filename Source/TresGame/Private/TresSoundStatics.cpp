#include "TresSoundStatics.h"

class UObject;
class UAudioComponent;
class USoundBase;
class USoundConcurrency;
class UTresFieldVoice;

void UTresSoundStatics::TresWaitForEndOfFieldVoice(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

UAudioComponent* UTresSoundStatics::TresSpawnSound2D_BP(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    return NULL;
}

void UTresSoundStatics::TresSoundMode_Start(TEnumAsByte<ETresSoundModes::Type> mode) {
}

void UTresSoundStatics::TresSoundMode_Reset() {
}

void UTresSoundStatics::TresSoundMode_End(TEnumAsByte<ETresSoundModes::Type> mode) {
}

void UTresSoundStatics::TresSound_StopRTSounds() {
}

void UTresSoundStatics::TresSound_SetEnableAudioVolumeUpdate(bool bEnable) {
}

void UTresSoundStatics::TresSound_SetBGVolume(TEnumAsByte<ETresCategoryVolumeLayers::Type> Layer, float Volume, float FadeTime) {
}

int32 UTresSoundStatics::TresSound_GetAudiobleNumSoundsAtLocation(UObject* WorldContextObject, FVector Location) {
    return 0;
}

void UTresSoundStatics::TresPlaySound2D_BP(const UObject* WorldContextObject, USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundConcurrency* ConcurrencySettings) {
}

void UTresSoundStatics::TresPlayFieldVoice(UObject* WorldContextObject, UTresFieldVoice* Asset, bool CanSkip) {
}

FStringAssetReference UTresSoundStatics::TresGetWorldStaticBGMAssetReference(UObject* WorldContextObject, TEnumAsByte<ETresWorldStaticBGMTypes::Type> Type) {
    return FStringAssetReference{};
}

USoundBase* UTresSoundStatics::TresGetWorldStaticBGMAsset(UObject* WorldContextObject, TEnumAsByte<ETresWorldStaticBGMTypes::Type> Type) {
    return NULL;
}

UTresSoundStatics::UTresSoundStatics() {
}

