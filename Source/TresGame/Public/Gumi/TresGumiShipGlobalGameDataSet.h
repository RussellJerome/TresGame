#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipGlobalGameDataSet.generated.h"

class UDataTable;

UCLASS()
class UTresGumiShipGlobalGameDataSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGlobalEnemySystemDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pHitEffectParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinScaleOfHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxScaleOfHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNearDistOfHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFarDistOfHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pAttackParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pWeaponParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pProjectileParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pPrizeItemParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pHudStanderdParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pEnemyTerritoryParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pBattleMissionCommonParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pBattleMissionInvidivalParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pBattleMissionItemParameterDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickMineTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickMagmaTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickMeteorTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickCannonTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickSwCannonTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickTreasureTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickCrystalTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickPrizeBoxTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickDashRingTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* m_pGimmickConstellationTable;
    
public:
    UTresGumiShipGlobalGameDataSet();
};

