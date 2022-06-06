#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex352_ChaosFiragaBase.h"
#include "TresAttack14_e_ex352_SneezeChaosFiraga.generated.h"

class UCurveFloat;

UCLASS(HideDropdown)
class UTresAttack14_e_ex352_SneezeChaosFiraga : public UTresAttack_e_ex352_ChaosFiragaBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterSurroundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DarkMatterControlCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoefficientForCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterSandwichMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterCombinedWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkMatterApproachMoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetFurturePositionCorrection;
    
    UTresAttack14_e_ex352_SneezeChaosFiraga();
};

