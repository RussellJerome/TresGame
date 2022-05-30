#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex359_BerserkCombo_Dash.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex359_BerserkCombo_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fApproachAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fApproachMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackStartDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackCancelTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAttackVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEndBrake;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEndMinVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChangeOnAppear;
    
    UTresAttack3_e_ex359_BerserkCombo_Dash();
};

