#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "ETresBodyCollReactionType.h"
#include "TresMove_e_ex357_Base.generated.h"

UCLASS(HideDropdown)
class UTresMove_e_ex357_Base : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableOverrideBodyCollReactionType: 1;
    
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_OverrideBodyCollReactionType;
    
public:
    UTresMove_e_ex357_Base();
};

