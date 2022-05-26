#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ActionCancelParam_e_ex043.h"
#include "TresAttack1_e_ex043_SeventhCombo.generated.h"

class UCurveFloat;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex043_SeventhCombo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bIsHoming;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingAccelInitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingAccelDurationSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingDecelMinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingDecelMaxDist;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_HomingDecelCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMoveMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMoveMinZDiff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingTurnRateDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMinPitchDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingMaxPitchDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fHomingPitchResetRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTarLocCalc_MoveMinDistCoefficient_Homing;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTarLocCalc_VelocityCoefficient_Homing;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSeventhHitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSeventhHitMaxMoveDist2D;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fSeventhHitMaxDist2DFromStart;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam1_Boost;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam2_Hit6;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam3_Hit7;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDisplay;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugOutput;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugVerboseOutput;
    
    UTresAttack1_e_ex043_SeventhCombo();
};

