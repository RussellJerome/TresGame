#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresUIGigasGameResultRank.h"
#include "ETresUIGigasGameStartSignalType.h"
#include "Engine/LatentActionManager.h"
#include "TresGimmick_Ts03_GigasGameMgr.generated.h"

class USceneComponent;
class UObject;

UCLASS(Abstract)
class ATresGimmick_Ts03_GigasGameMgr : public AActor {
    GENERATED_BODY()
public:
    ATresGimmick_Ts03_GigasGameMgr();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregistGimmickHudMarker(USceneComponent* pComp);
    
    UFUNCTION(BlueprintCallable)
    void UnregistAllGimmickHudMarker();
    
    UFUNCTION(BlueprintCallable)
    void ShowReadyStart(ETresUIGigasGameStartSignalType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeRecord(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetHighScore(int32 Score);
    
    UFUNCTION(BlueprintCallable)
    void RegistGimmickHudMarker(USceneComponent* pComp);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    void OpenTitle(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", LatentInfo = "LatentInfo"))
    void OpenResult(const UObject* WorldContextObject, float ClearMilliSec, int32 totalScore, ETresUIGigasGameResultRank ClearRank, bool bNewRecord, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnClosedUITitle(bool bGameStart);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnClosedUIResult();
    
    UFUNCTION(BlueprintPure)
    bool IsValidDebugRank() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDebugContinuousChain() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeHud();
    
    UFUNCTION(BlueprintCallable)
    void GetTitleResult(bool& StartGame);
    
    UFUNCTION(BlueprintPure)
    float GetTimeRecord() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHighScore() const;
    
    UFUNCTION(BlueprintPure)
    ETresUIGigasGameResultRank GetDebugRank() const;
    
    UFUNCTION(BlueprintCallable)
    void FinalizeHud();
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugSetSec(float sec);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugSetScore(int32 Score);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugSetContinuousChain(bool Enable);
    
    UFUNCTION(BlueprintImplementableEvent)
    void DebugSetChain(int32 chain);
    
    UFUNCTION(BlueprintNativeEvent)
    void ClearGame();
    
    UFUNCTION(BlueprintCallable)
    void AddAward(const FString& LocalizeKey, int32 Score);
    
};

