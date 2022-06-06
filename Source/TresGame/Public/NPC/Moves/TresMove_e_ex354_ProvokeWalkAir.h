#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAirCodeDriven.h"
#include "TresMove_e_ex354_ProvokeWalkAir.generated.h"

UCLASS(HideDropdown)
class UTresMove_e_ex354_ProvokeWalkAir : public UTresLocomotionDefinitionAirCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bInvincible;
    
    UTresMove_e_ex354_ProvokeWalkAir();
};

