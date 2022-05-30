#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex359_BerserkCombo_CutUp.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex359_BerserkCombo_CutUp : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMinTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChangeOnAppear;
    
    UTresAttack3_e_ex359_BerserkCombo_CutUp();
};

