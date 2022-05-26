#include "TresUnrealEngineLevelStatics.h"

class UObject;
class ULevelStreamingKismet;
class ULevelStreaming;

void UTresUnrealEngineLevelStatics::UnloadStreamingLevelInstanceFromName(UObject* WorldContextObject, FName LevelName, bool& bOutSuccess) {
}

void UTresUnrealEngineLevelStatics::UnloadLevelInstanceAll(UObject* WorldContextObject) {
}

void UTresUnrealEngineLevelStatics::UnLoadLevelInstance(UObject* WorldContextObject, ULevelStreamingKismet* StreamingLevel, bool& bOutSuccess) {
}

void UTresUnrealEngineLevelStatics::ToggleForceLoadStreamingLevelFromName(UObject* WorldContextObject, FName LevelName, bool& bOutSuccess) {
}

void UTresUnrealEngineLevelStatics::RegisterForceWaitStremingLevelListFromBlueprint(const FString& LevelName) {
}

ULevelStreamingKismet* UTresUnrealEngineLevelStatics::LoadStreamingLevelInstanceFromName(UObject* WorldContextObject, FName LevelName, bool& bOutSuccess) {
    return NULL;
}

TArray<ULevelStreaming*> UTresUnrealEngineLevelStatics::GetLevelStreamings() {
    return TArray<ULevelStreaming*>();
}

FString UTresUnrealEngineLevelStatics::GetLevelRealPackageNameFromIndex(int32 Index) {
    return TEXT("");
}

TArray<FString> UTresUnrealEngineLevelStatics::GetLevelPackageNames(bool useCache) {
    return TArray<FString>();
}

FString UTresUnrealEngineLevelStatics::GetLevelPackageNameFromIndex(int32 Index) {
    return TEXT("");
}

UTresUnrealEngineLevelStatics::UTresUnrealEngineLevelStatics() {
}

