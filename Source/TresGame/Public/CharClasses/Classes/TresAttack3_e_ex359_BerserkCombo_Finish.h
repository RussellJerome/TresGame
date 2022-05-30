#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex359_BerserkCombo_Finish.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex359_BerserkCombo_Finish : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fWarpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fGoalToTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bNoWarpOnAppear;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChange;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bStartFromEnableChangeOnAppear;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEnableGravityOnTresTiming;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bEndBerserkCombo;
    
    UTresAttack3_e_ex359_BerserkCombo_Finish();
};

