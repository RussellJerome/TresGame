#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipBattleMissionRankType.h"
#include "TresGumiShipActorCompoBase.h"
#include "ETresGumiShipBattleMissionEndFactorType.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "ETresGumiShipBonusType.h"
#include "TresGumiShipMissionMgr.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipMissionMgr : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipTeardownBattleMission, const ETresGumiShipBattleMissionEndFactorType, eEndType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipStartResult);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipStartDrawHUDWhenStartBattle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipStartBattleMission);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipRankConfirmedResult, const TEnumAsByte<ETresGumiShipBattleMissionRankType>, eRank);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipGetBattleBonus, TEnumAsByte<ETresGumiShipBonusType>, eType, int32, dPoint);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGumiShipFinishedBattleMission, const ETresGumiShipBattleMissionEndFactorType, eEndType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTresGumiShipDefeatedBossToHaveKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresGumiShipChangeRank, const TEnumAsByte<ETresGumiShipBattleMissionRankType>, eOldRank, const TEnumAsByte<ETresGumiShipBattleMissionRankType>, eNewRank);
    
    UTresGumiShipMissionMgr();
protected:
    UFUNCTION()
    void _OnTargetWipeOut();
    
    UFUNCTION()
    void _OnResultRetry();
    
    UFUNCTION()
    void _OnRankConfirmedResult();
    
    UFUNCTION()
    void _OnOneEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION()
    void _OnFinishedResultConfirm(int32 dSelectedIndex);
    
    UFUNCTION()
    void _OnFinishedResult();
    
    UFUNCTION()
    void _OnFinishedRailSlide();
    
    UFUNCTION()
    void _OnFinishedInfomation();
    
    UFUNCTION()
    void _OnDefeated(const AActor* pTarget);
    
    UFUNCTION()
    void _OnChangeHpOfPlayer(const int32 dOldHp, const int32 dNewHp, const float fRatio);
    
    UFUNCTION()
    void _OnCauseDamage(const AActor* pTarget, const float fDamage);
    
};

