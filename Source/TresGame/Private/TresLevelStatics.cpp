#include "TresLevelStatics.h"

class UObject;

void UTresLevelStatics::WaitTextureStreamingByGameStart(float Time) {
}

void UTresLevelStatics::TresWaitTextureStreaming(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresLevelStatics::TresUnloadStreamLevel(const UObject* WorldContextObject, FName LevelName, bool bBlockUnload, FLatentActionInfo LatentInfo) {
}

void UTresLevelStatics::TresSetLoadPercentage(float Rate, float completeTime) {
}

void UTresLevelStatics::TresRequestExtensionMapLoading() {
}

void UTresLevelStatics::TresLoadStreamLevel(const UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo) {
}

void UTresLevelStatics::TresFinishMapLoading(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UTresLevelStatics::ToggleTresPackageShouldBeVisible(UObject* WorldContextObject, FName PackageName) {
}

void UTresLevelStatics::ToggleTresPackageShouldBeLoaded(UObject* WorldContextObject, FName PackageName) {
}

void UTresLevelStatics::ToggleTresDebugLevelLoad() {
}

void UTresLevelStatics::SetTresLevelAllActorEnableCollision(UObject* WorldContextObject, FName PackageName, bool Enable) {
}

void UTresLevelStatics::SetSqexLevelActorVisible(const TArray<FName>& levelArray, bool Visible) {
}

void UTresLevelStatics::PropagateLightingScenarioChange() {
}

bool UTresLevelStatics::IsTresDebugLevelLoad() {
    return false;
}

bool UTresLevelStatics::IsExecuteLevelStreaming(UObject* WorldContextObject, bool isWaitMakeVisible) {
    return false;
}

ETresLevelVisibility UTresLevelStatics::GetLevelVisibleTypeFromName(FName Name) {
    return ETresLevelVisibility::Default;
}

ETresLevelVisibility UTresLevelStatics::GetLevelVisibleType(int32 Index) {
    return ETresLevelVisibility::Default;
}

FString UTresLevelStatics::GetLevelStreamingSupplementaryInformation(FName Name) {
    return TEXT("");
}

ETresLevelLoadAndVisible UTresLevelStatics::GetLevelLoadAndVisibleFromName(FName Name) {
    return ETresLevelLoadAndVisible::None;
}

ETresLevelLoadAndVisible UTresLevelStatics::GetLevelLoadAndVisible(int32 Index) {
    return ETresLevelLoadAndVisible::None;
}

void UTresLevelStatics::ClearSqexLevelActorVisible() {
}

UTresLevelStatics::UTresLevelStatics() {
}

