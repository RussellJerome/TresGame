// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresUnrealEngineLevelStatics.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresUnrealEngineLevelStatics : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresUnrealEngineLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void UnloadStreamingLevelInstanceFromName(class UObject* WorldContextObject, const FName& LevelName, bool& bOutSuccess) {};

	UFUNCTION(BlueprintCallable, Category = "TresUnrealEngineLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void UnloadLevelInstanceAll(class UObject* WorldContextObject) {};

	UFUNCTION(BlueprintCallable, Category = "TresUnrealEngineLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void UnLoadLevelInstance(class UObject* WorldContextObject, class ULevelStreamingKismet* StreamingLevel, bool& bOutSuccess) {};

	UFUNCTION(BlueprintCallable, Category = "TresUnrealEngineLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void ToggleForceLoadStreamingLevelFromName(class UObject* WorldContextObject, const FName& LevelName, bool& bOutSuccess) {};

	UFUNCTION(BlueprintCallable, Category = "TresUnrealEngineLevelStatics")
	static void RegisterForceWaitStremingLevelListFromBlueprint(const FString& LevelName) {};

	UFUNCTION(BlueprintCallable, Category = "TresUnrealEngineLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static class ULevelStreamingKismet* LoadStreamingLevelInstanceFromName(class UObject* WorldContextObject, const FName& LevelName, bool& bOutSuccess) { return nullptr; };

	UFUNCTION(BlueprintPure, Category = "TresUnrealEngineLevelStatics")
	static TArray<class ULevelStreaming*> GetLevelStreamings() { return TArray<class ULevelStreaming*>(); };

	UFUNCTION(BlueprintPure, Category = "TresUnrealEngineLevelStatics")
	static FString GetLevelRealPackageNameFromIndex(int Index) { return FString::FString(); };

	UFUNCTION(BlueprintPure, Category = "TresUnrealEngineLevelStatics")
	static TArray<FString> GetLevelPackageNames(bool useCache) { return TArray<FString>(); };

	UFUNCTION(BlueprintPure, Category = "TresUnrealEngineLevelStatics")
	static FString GetLevelPackageNameFromIndex(int Index) { return FString::FString(); };
};
