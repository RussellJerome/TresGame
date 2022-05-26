#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipEnemyGroupWipeOutData.h"
#include "ETresGumiShipBattleMissionRankType.h"
#include "ETresGumiShipEnemyBattleFinishType.h"
#include "TresGumiShipRailShootingBattleSetData.h"
#include "ETresGumiShipEnemyBattleStartType.h"
#include "ETresGumiShipEnemyTerritoryID.h"
#include "ETresGumiShipBattleMissionEndFactorType.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipEnemyBattleStarter.generated.h"

class UObject;
class ATresGumiShipEnemyTerritoryPoint;
class ATresGumiShipBattleArenaMeshActor;
class ATresGumiShipActualRailSlideArrangement;
class ATriggerBase;
class ATresGumiShipFieldBattleEnemyGenerator;
class ATresGumiShipExternalEnemyGenerator;
class ATresGumiShipRailShootingBattleStarterGenerator;
class ATresGumiShipWorldSymbolActor;
class UPrimitiveComponent;
class AActor;

UCLASS()
class ATresGumiShipEnemyBattleStarter : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyGroupWipeOutSignature, const FTresGumiShipEnemyGroupWipeOutData&, EnemyGroupWipeOutData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyBattleRankConfirmedSignature, const TEnumAsByte<ETresGumiShipBattleMissionRankType>, eRank);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyBattleFinishSignature, ETresGumiShipEnemyBattleFinishType, BattleFinishType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAllEnemyGroupWipeOutSignature);
    
    UPROPERTY(BlueprintAssignable)
    FEnemyBattleFinishSignature OnEnemyBattleFinished;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyBattleRankConfirmedSignature OnEnemyBattleRankConfirmed;
    
    UPROPERTY(BlueprintAssignable)
    FEnemyGroupWipeOutSignature OnOneEnemyGroupWipeOut;
    
    UPROPERTY(BlueprintAssignable)
    FAllEnemyGroupWipeOutSignature OnAllEnemyGroupWipeOut;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGumiShipEnemyBattleStartType m_eBattleStartType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETresGumiShipEnemyTerritoryID m_eEnemyTerritoryID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATresGumiShipEnemyTerritoryPoint* m_pBoundEnemyTerritoryPoint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ATresGumiShipBattleArenaMeshActor* m_pBattleArenaMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bDisableStart;
    
    UPROPERTY(EditAnywhere)
    ATriggerBase* m_pFieldBattleTriggerVolume;
    
    UPROPERTY(EditAnywhere)
    TArray<ATresGumiShipFieldBattleEnemyGenerator*> m_FieldBattleEnemyGeneratorList;
    
    UPROPERTY(EditAnywhere)
    FName m_BossEnemyAppearRemoteEventName;
    
    UPROPERTY(EditAnywhere)
    float m_fBossEnemyAppearEventFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bIsHideBossEnemyOnFieldEncounter;
    
    UPROPERTY(EditAnywhere)
    ATriggerBase* m_pRevengeMatchBossBattleStartTrigger;
    
    UPROPERTY(EditAnywhere)
    TArray<ATresGumiShipExternalEnemyGenerator*> m_BossEnemyUsingEnemyGeneratorList;
    
    UPROPERTY(EditAnywhere)
    ATresGumiShipActualRailSlideArrangement* m_pRailShootingRouteSpline;
    
    UPROPERTY(EditAnywhere)
    ATriggerBase* m_pRailShootingBattleStartTrigger;
    
    UPROPERTY(EditAnywhere)
    ATresGumiShipRailShootingBattleStarterGenerator* m_pRailShootingBattleStarterGenerator;
    
    UPROPERTY(EditAnywhere)
    TArray<FTresGumiShipRailShootingBattleSetData> m_RailShootingBattleSetDataList;
    
    UPROPERTY(EditAnywhere)
    ATriggerBase* m_pEnemyDisappearTriggerAtSplineEnd;
    
    UPROPERTY(EditAnywhere)
    bool m_bHideGuideMarkerFirstBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bForbiddenRetryFirstClear;
    
public:
    ATresGumiShipEnemyBattleStarter();
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintPure)
    ATresGumiShipActualRailSlideArrangement* GetRailShootingRouteSpline() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
private:
    UFUNCTION(BlueprintCallable)
    void _SpawnHiddenSettingBossEnemy(bool bHiddenBoss);
    
    UFUNCTION(BlueprintCallable)
    void _SetRevengeMatchBossFlag(bool bIsRevengeMatchBoss);
    
    UFUNCTION(BlueprintCallable)
    bool _SetLockWorldSymbolActorByBoss(ATresGumiShipWorldSymbolActor* LockTargetWorldSymbol);
    
    UFUNCTION()
    void _OnRailShootingBattleResultRankConfirmed(const TEnumAsByte<ETresGumiShipBattleMissionRankType> eRank);
    
    UFUNCTION()
    void _OnRailShootingBattleResultEnter();
    
    UFUNCTION()
    void _OnRailShootingBattleMissionClear(const ETresGumiShipBattleMissionEndFactorType eEndType);
    
    UFUNCTION()
    void _OnRailShootingBattleFinalize(const ETresGumiShipBattleMissionEndFactorType eEndType);
    
    UFUNCTION()
    void _OnLeaveFieldBattleTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnLeaveBattleStartTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void _OnEnterFieldBattleTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void _OnEnterEnemyDisappearTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void _OnEnterBattleStartTriggerVolume(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void _OnEnemyGroupWipeOut(const FTresGumiShipEnemyGroupWipeOutData& rEnemyGroupWipeOutData);
    
    UFUNCTION(BlueprintCallable)
    static bool _HideCurrentBattleArenaMeshActor(const UObject* WorldContextObject, bool bHide);
    
};

