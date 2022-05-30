#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex310_BerserkCombo.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex310_BerserkCombo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fDashGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDashMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fComboGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fComboMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAbortOnComboFail;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAbortOnComboGuraded;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fUpperGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fUpperMaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishJumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMaxWarpDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishWaitTime;
    
    UTresAttack3_e_ex310_BerserkCombo();
};

