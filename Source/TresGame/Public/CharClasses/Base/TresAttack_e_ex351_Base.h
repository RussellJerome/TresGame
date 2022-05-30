#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollReactionType.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ex351_Base.generated.h"

UCLASS(HideDropdown)
class UTresAttack_e_ex351_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyCollReactionType;
    
    UTresAttack_e_ex351_Base();
};

