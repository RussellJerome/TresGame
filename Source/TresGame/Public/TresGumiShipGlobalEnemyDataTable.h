#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipGlobalEnemyDataTable.generated.h"

USTRUCT()
struct FTresGumiShipGlobalEnemyDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_BossWorldUnlockRemoteEventName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SymbolEncountBattleStartRemoteEventName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEnemyRespawnIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEnemyRespawnThresholdDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBattleStartConditionThresholdTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBattleStartTriggerActivateThresholdScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEnemyAttackRequestableScreenPercentageX;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEnemyAttackRequestableScreenPercentageY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEnemyAppearFadeDelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTutorialHelpShowThresholdDistance;
    
    TRESGAME_API FTresGumiShipGlobalEnemyDataTable();
};

