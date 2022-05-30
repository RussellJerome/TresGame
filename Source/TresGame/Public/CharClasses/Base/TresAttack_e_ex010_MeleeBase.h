#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionMelee.h"
#include "TresAttack_e_ex010_MeleeBase.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex010_MeleeBase : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    bool m_fDisableBodyCollision;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTractionVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fStopDistance;
    
    UTresAttack_e_ex010_MeleeBase();
};

