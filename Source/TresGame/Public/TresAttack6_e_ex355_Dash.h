#pragma once
#include "CoreMinimal.h"
#include "EX355_ThrowAirSet.h"
#include "TresAttackDefinitionBase.h"
#include "EX355_DashClaymoreInfo.h"
#include "EX355_DashRoamDir.h"
#include "EX355_DashThrowTimingInfo.h"
#include "WaveSet_e_ex359.h"
#include "WaveOneCollInfo_e_ex359.h"
#include "EX355_DashClaymoreSet.h"
#include "EX355_DashClaymoreMap.h"
#include "EX355_DashClaymoreSpawnWaitSet.h"
#include "TresAttack6_e_ex355_Dash.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresAttack6_e_ex355_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fFirstRoamTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iMaxAttackCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fNextAttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fLastRoamTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEndAttackDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackTurnVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxAreaRadiusPreventingOuterTurn;
    
    UPROPERTY()
    bool m_bMaxAreaRadiusPreventingOuterTurn;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_DashRoamDir> m_DashRoamDirArray;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableTurnToTargetOnAccel;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableTurnToTargetOnSwing;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAutoDirSwap;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDashAttackRotThreasholdAngle;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveOneCollInfo_e_ex359 m_OneCollInfo;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex359 m_WaveSet;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex359 m_WaveSet_Swing;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Roam;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_RoamReverse;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Attack;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEQSWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackEqsWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDsip;
    
    UPROPERTY(EditDefaultsOnly)
    FEX355_ThrowAirSet m_ThrowAirSet;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_DashThrowTimingInfo> m_ThrowTimingInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ThrowTimingSpawnWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnOnlyLastProjExists;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDestroyLastProj;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_ThrowSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDsipThrow;
    
    UPROPERTY(EditDefaultsOnly)
    FEX355_DashClaymoreInfo m_DashClaymoreInfo;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDashClaymoreAtkColl;
    
protected:
    UPROPERTY()
    TArray<FEX355_DashClaymoreSet> m_DashClaymoreSetArray;
    
    UPROPERTY()
    TArray<FEX355_DashClaymoreMap> m_DashClaymoreMapArray;
    
    UPROPERTY()
    TArray<FEX355_DashClaymoreSpawnWaitSet> m_DashClaymoreSpawnWaitSetArray;
    
public:
    UTresAttack6_e_ex355_Dash();
};

