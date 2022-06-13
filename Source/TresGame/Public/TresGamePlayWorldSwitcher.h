#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Invoker.h"
#include "TresGamePlayWorldSwitcher.generated.h"

class AActor;
class UTresGameInstance;
class AGameModeBase;
class APlayerController;
class APawn;
class APlayerStart;
class ULevel;
class UModelComponent;
class APostProcessVolume;
class UTresGimmickComponentBase;
class ATresKHShaderController;

USTRUCT(BlueprintType)
struct FTresGamePlayWorldSwitcher {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UTresGameInstance* m_GameInstance;
    
    UPROPERTY(Transient)
    ESQEX_Invoker m_Invoker;
    
    UPROPERTY(Transient)
    bool m_FromMenu;
    
    UPROPERTY(Transient)
    bool m_Paused;
    
    UPROPERTY(Transient)
    int32 m_BattleLevel;
    
    UPROPERTY(Transient)
    AGameModeBase* m_GameMode;
    
    UPROPERTY(Transient)
    APlayerController* m_PlayerController;
    
    UPROPERTY(Transient)
    APawn* m_PlayerPawn;
    
    UPROPERTY(Transient)
    AActor* m_ViewTarget;
    
    UPROPERTY(Transient)
    APlayerStart* m_PlayerStartForTeleport;
    
    UPROPERTY(Transient)
    TArray<ULevel*> m_Levels;
    
    UPROPERTY(Transient)
    TArray<FName> m_ActiveLevels;
    
    UPROPERTY(Export, Transient)
    TArray<UModelComponent*> m_ModelComponents;
    
    UPROPERTY(Transient)
    TArray<AActor*> m_Actors;
    
    UPROPERTY(Transient)
    TArray<APostProcessVolume*> m_PostProcessVolumes;
    
    UPROPERTY(Export, Transient)
    TArray<UTresGimmickComponentBase*> m_Gimmicks;
    
    UPROPERTY(Transient)
    ATresKHShaderController* m_pKHSBackup;
    
    UPROPERTY(Transient)
    FName m_PrepareName;
    
    UPROPERTY(Transient)
    FName m_StartName;
    
public:
    TRESGAME_API FTresGamePlayWorldSwitcher();
};

