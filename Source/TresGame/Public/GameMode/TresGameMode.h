#pragma once
#include "CoreMinimal.h"
#include "TresGameModeBase.h"
#include "TresGameMode.generated.h"

class UTresGameModeLoadAsset;
class ATresGameState;
class ATresAtkCollManager;
class ATresProjectileManager;
class ATresAICoordinator;
class ATresPlayerStart;
class UTresNavMapShowManager;
class UObject;

UCLASS(MinimalAPI, NonTransient)
class ATresGameMode : public ATresGameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(DuplicateTransient, Transient)
    ATresGameState* m_pTresGameState;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresAtkCollManager* m_AtkCollManager;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresProjectileManager* m_ProjectileManager;
    
    UPROPERTY(EditDefaultsOnly)
    UTresGameModeLoadAsset* m_LoadAsset;
    
    UPROPERTY(DuplicateTransient, Transient)
    ATresAICoordinator* m_AICoordinator;
    
    UPROPERTY(Transient)
    ATresPlayerStart* m_AutoSavePoint;
    
private:
    UPROPERTY(Transient)
    bool m_IsShowMapName;
    
    UPROPERTY(Transient)
    bool m_IsWakeupShowMapName;
    
    UPROPERTY(Transient)
    bool m_StopShowMapNameSystem;
    
    UPROPERTY(Transient)
    UTresNavMapShowManager* m_pNavMapShowManager;
    
public:
    ATresGameMode();
    UFUNCTION(BlueprintPure)
    ATresAICoordinator* GetAICoordinator() const;
    
    UFUNCTION(Exec)
    void DebugShowTresCollManagerInfo(bool bDispEnable);
    
    UFUNCTION(Exec)
    void DebugShowProjectileManagerInfo(bool bDispEnable);
    
    UFUNCTION(Exec)
    void DebugShowAtkCollManagerInfo(bool bDispEnable);
    
    UFUNCTION(Exec)
    void DebugEnableHitStop(bool bEnable);
    
    UFUNCTION(BlueprintNativeEvent)
    void BPE_OverrideMapJumpPath(UObject* From, int32 InFadeKind, const FName& InMapName, const FName& InPlayerStartTag, FName& OutMapName, FName& OutPlayerStartTag);
    
};

