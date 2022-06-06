#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX355_AccelTractionInfo.h"
#include "WaveSet_e_ex359.h"
#include "EX355_AccelDirectionInfo.h"
#include "EX355_AccelWaveTimingInfo.h"
#include "TresCoopAttack2_e_ex355_Accel.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoopAttack2_e_ex355_Accel : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_AccelTractionInfo> m_TractionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    FWaveSet_e_ex359 m_WaveSet;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnWaveOnNotifyTimingRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnWaveOnNotifyTiming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWaveMargin;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_iWaveNum;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX355_AccelDirectionInfo> m_AttackTargetDirectionInfoArray;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDefaultRootMotionScaleDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseTurnToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bWarpDisappear;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bWarpMove;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_Warp;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEndWarpMove;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQS_EndWarp;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_EndWarpBBKeyName;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_WaveTimingOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_WaveOneFrameDelayScale;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bDebugDisp_Wave;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bDebugDisp_Angle_Scale;
    
    UPROPERTY()
    TArray<FEX355_AccelWaveTimingInfo> m_WaveTimingInfoArray;
    
    UTresCoopAttack2_e_ex355_Accel();
};

