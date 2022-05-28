#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresMove_e_ex354_ProvokeWalk.generated.h"

UCLASS(HideDropdown)
class UTresMove_e_ex354_ProvokeWalk : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bInvincible;
    
    UTresMove_e_ex354_ProvokeWalk();
};

