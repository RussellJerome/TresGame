#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex359_BerserkCombo_7Combo.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex359_BerserkCombo_7Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMinTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAccelAfterApproached;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fInitVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChangeOnAppear;
    
    UTresAttack3_e_ex359_BerserkCombo_7Combo();
};

