#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresUnrealEngineLevelStatics.generated.h"

class ULevelStreamingKismet;
class ULevelStreaming;

UCLASS(Abstract, BlueprintType, NotPlaceable)
class TRESGAME_API UTresUnrealEngineLevelStatics : public UObject {
    GENERATED_BODY()
public:
    UTresUnrealEngineLevelStatics();
    UFUNCTION(BlueprintCallable)
    static void UnloadStreamingLevelInstanceFromName(UObject* WorldContextObject, FName LevelName, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadLevelInstanceAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void UnLoadLevelInstance(UObject* WorldContextObject, ULevelStreamingKismet* StreamingLevel, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleForceLoadStreamingLevelFromName(UObject* WorldContextObject, FName LevelName, bool& bOutSuccess);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void RegisterForceWaitStremingLevelListFromBlueprint(const FString& LevelName);
    
public:
    UFUNCTION(BlueprintCallable)
    static ULevelStreamingKismet* LoadStreamingLevelInstanceFromName(UObject* WorldContextObject, FName LevelName, bool& bOutSuccess);
    
    UFUNCTION(BlueprintPure)
    static TArray<ULevelStreaming*> GetLevelStreamings();
    
    UFUNCTION(BlueprintPure)
    static FString GetLevelRealPackageNameFromIndex(int32 Index);
    
    UFUNCTION(BlueprintPure)
    static TArray<FString> GetLevelPackageNames(bool useCache);
    
    UFUNCTION(BlueprintPure)
    static FString GetLevelPackageNameFromIndex(int32 Index);
    
};

