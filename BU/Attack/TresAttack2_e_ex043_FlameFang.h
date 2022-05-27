#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex043_FlameFangBoostType.h"
#include "TresAttackDefinitionBase.h"
#include "ActionCancelParam_e_ex043.h"
#include "TresAttack2_e_ex043_FlameFang.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAttack2_e_ex043_FlameFang : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex043_FlameFangBoostType> m_FlameFangBoostType;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_FlameFangBoostDirectionCurve_XY;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_FlameFangBoostDirectionCurve_Z;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBoostSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinAttackDistance_Hit1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTarLocCalc_MinAttackDistCoefficient_Hit1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTarLocCalc_VelocityCoefficient_Hit1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTarLocCalc_RotDegrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinHeightDiff;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStepAttackJumpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStepEndSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinAttackDistance_Hit3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTarLocCalc_MinAttackDistCoefficient_Hit3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTarLocCalc_VelocityCoefficient_Hit3;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam1_Hit1;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam2_Hit2;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam3_Hit3;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugDisplay;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bDebugBoostLimiter;
    
    UTresAttack2_e_ex043_FlameFang();
};

