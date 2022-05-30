#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "TresMove_e_ex353_Base.generated.h"

UCLASS(HideDropdown)
class UTresMove_e_ex353_Base : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableSetBodyCollReactionType: 1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyCollReactionType;
    
public:
    UTresMove_e_ex353_Base();
};

