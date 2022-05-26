#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TripleBreakRootMotionScaleParam_e_ex043.h"
#include "ActionCancelParam_e_ex043.h"
#include "TresAttack4_e_ex043_Counter.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex043_Counter : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fCounterStanceDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCounterStanceMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fCounterAttackDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinCounterEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinCounterEndDistanceTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxCounterEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBackStepSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDefaultRootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    FTripleBreakRootMotionScaleParam_e_ex043 m_MinRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    FTripleBreakRootMotionScaleParam_e_ex043 m_MaxRootMotionScaleParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingTurnRateDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMinPitchDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMaxPitchDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingPitchResetRate;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam1_BackStep;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam2_BackStepEnd;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam3_Hit2;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam4_Hit3;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam5_TripleBreakEnd;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugIsDist3D;
    
    UTresAttack4_e_ex043_Counter();
};

