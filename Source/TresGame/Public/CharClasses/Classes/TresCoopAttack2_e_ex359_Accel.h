#pragma once
#include "CoreMinimal.h"
#include "EX359_AccelWaveTimingInfo.h"
#include "EEX359_SplineMoveVelocityType.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "EAccelVoice_e_ex359.h"
#include "EX359_BeamInfoSet.h"
#include "TresCoopAttack2_e_ex359_Accel.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoopAttack2_e_ex359_Accel : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bMoveStart;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxDisappearTime;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_MoveStartEQS;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveStartVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_MoveStartVelocityType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveStartVelocityExp;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMoveStart_StartTangent;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMoveStart_GoalTangent;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_AttackAngleArray;
    
    UPROPERTY(EditDefaultsOnly)
    FEX359_BeamInfoSet m_BeamInfoSet;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnBeamOnNotifyTimingRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bSpawnBeamOnNotifyTiming;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bUseTurnToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fVerticalTractionVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDisableLockOnOnTiming;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bMoveEnd;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_MoveEndEQS;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveEndVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EEX359_SplineMoveVelocityType> m_MoveEndVelocityType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveEndVelocityExp;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMoveEnd_StartTangent;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vMoveEnd_GoalTangent;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<EAccelVoice_e_ex359> m_VoiceType;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_WaveTimingOffset;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_bDebugDisp;
    
    UPROPERTY()
    TArray<FEX359_AccelWaveTimingInfo> m_WaveTimingInfoArray;
    
    UTresCoopAttack2_e_ex359_Accel();
};

