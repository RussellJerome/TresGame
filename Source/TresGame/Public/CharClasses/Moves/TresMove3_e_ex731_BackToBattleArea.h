#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "TresMove3_e_ex731_BackToBattleArea.generated.h"

UCLASS(HideDropdown)
class UTresMove3_e_ex731_BackToBattleArea : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_bInvincible;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyReactionType;
    
    UTresMove3_e_ex731_BackToBattleArea();
};

