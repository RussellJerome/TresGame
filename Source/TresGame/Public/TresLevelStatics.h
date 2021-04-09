// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresGame_StructsAndEnums.h"
#include "TresLevelStatics.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresLevelStatics : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics")
	static void WaitTextureStreamingByGameStart(float Time) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void TresWaitTextureStreaming(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void TresUnloadStreamLevel(class UObject* WorldContextObject, const FName& LevelName, bool bBlockUnload, const struct FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics")
	static void TresSetLoadPercentage(float Rate, float completeTime) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics")
	static void TresRequestExtensionMapLoading() {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void TresLoadStreamLevel(class UObject* WorldContextObject, const FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const struct FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void TresFinishMapLoading(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void ToggleTresPackageShouldBeVisible(class UObject* WorldContextObject, const FName& PackageName) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void ToggleTresPackageShouldBeLoaded(class UObject* WorldContextObject, const FName& PackageName) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics")
	static void ToggleTresDebugLevelLoad() {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static void SetTresLevelAllActorEnableCollision(class UObject* WorldContextObject, const FName& PackageName, bool Enable) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics")
	static void SetSqexLevelActorVisible(TArray<FName> levelArray, bool Visible) {};

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics")
	static void PropagateLightingScenarioChange() {};

	UFUNCTION(BlueprintPure, Category = "TresLevelStatics")
	static bool IsTresDebugLevelLoad() { return false; };

	UFUNCTION(BlueprintPure, Category = "TresLevelStatics", meta = (WorldContext = "WorldContextObject"))
	static bool IsExecuteLevelStreaming(class UObject* WorldContextObject, bool isWaitMakeVisible) { return false; };

	//UFUNCTION(BlueprintPure, Category = "TresLevelStatics")
	//static ETresLevelVisibility GetLevelVisibleTypeFromName(const FName& Name) { return ETresLevelVisibility::; };

	//UFUNCTION(BlueprintPure, Category = "TresLevelStatics")
	//static ETresLevelVisibility GetLevelVisibleType(int Index) { return ETresLevelVisibility::; };

	UFUNCTION(BlueprintPure, Category = "TresLevelStatics")
	static FString GetLevelStreamingSupplementaryInformation(const FName& Name) { return FString::FString(); };

	//UFUNCTION(BlueprintPure, Category = "TresLevelStatics")
	//static ETresLevelLoadAndVisible GetLevelLoadAndVisibleFromName(const FName& Name) { return ETresLevelLoadAndVisible::; };

	//UFUNCTION(BlueprintPure, Category = "TresLevelStatics")
	//static ETresLevelLoadAndVisible GetLevelLoadAndVisible(int Index) { return ETresLevelLoadAndVisible::; };

	UFUNCTION(BlueprintCallable, Category = "TresLevelStatics")
	static void ClearSqexLevelActorVisible() {};
};
