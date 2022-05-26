#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollReactionType.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex353_Base.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex353_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyCollReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bCanbeCancelAction: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bSingleShotCancelToClearVelocity: 1;
    
    UTresAttack_e_ex353_Base();
};

