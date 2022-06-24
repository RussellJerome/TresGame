#pragma once
#include "CoreMinimal.h"
#include "ETresLevelLoadAndVisible.h"
#include "ETresLevelVisibility.h"
#include "UObject/Object.h"
#include "Engine/LatentActionManager.h"
#include "TresLevelStatics.generated.h"

UCLASS(Abstract, BlueprintType, NotPlaceable)
class TRESGAME_API UTresLevelStatics : public UObject {
    GENERATED_BODY()
public:
    UTresLevelStatics();
    UFUNCTION(BlueprintCallable)
    static void WaitTextureStreamingByGameStart(float Time);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    static void TresWaitTextureStreaming(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    static void TresUnloadStreamLevel(const UObject* WorldContextObject, FName LevelName, bool bBlockUnload, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void TresSetLoadPercentage(float Rate, float completeTime);
    
    UFUNCTION(BlueprintCallable)
    static void TresRequestExtensionMapLoading();
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    static void TresLoadStreamLevel(const UObject* WorldContextObject, FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    static void TresFinishMapLoading(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static void ToggleTresPackageShouldBeVisible(UObject* WorldContextObject, FName PackageName);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static void ToggleTresPackageShouldBeLoaded(UObject* WorldContextObject, FName PackageName);
    
    UFUNCTION(BlueprintCallable)
    static void ToggleTresDebugLevelLoad();
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static void SetTresLevelAllActorEnableCollision(UObject* WorldContextObject, FName PackageName, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetSqexLevelActorVisible(const TArray<FName>& levelArray, bool Visible);
    
    UFUNCTION(BlueprintCallable)
    static void PropagateLightingScenarioChange();
    
    UFUNCTION(BlueprintPure)
    static bool IsTresDebugLevelLoad();
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
    static bool IsExecuteLevelStreaming(UObject* WorldContextObject, bool isWaitMakeVisible);
    
    UFUNCTION(BlueprintPure)
    static ETresLevelVisibility GetLevelVisibleTypeFromName(FName Name);
    
    UFUNCTION(BlueprintPure)
    static ETresLevelVisibility GetLevelVisibleType(int32 Index);
    
    UFUNCTION(BlueprintPure)
    static FString GetLevelStreamingSupplementaryInformation(FName Name);
    
    UFUNCTION(BlueprintPure)
    static ETresLevelLoadAndVisible GetLevelLoadAndVisibleFromName(FName Name);
    
    UFUNCTION(BlueprintPure)
    static ETresLevelLoadAndVisible GetLevelLoadAndVisible(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void ClearSqexLevelActorVisible();
    
};

