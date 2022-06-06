#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove2_GigasBase_BoosterFly.generated.h"

UCLASS(HideDropdown)
class UTresMove2_GigasBase_BoosterFly : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideAccelMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideAccelAcceleration;
    
    UTresMove2_GigasBase_BoosterFly();
};

