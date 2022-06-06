#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAirCodeDriven.h"
#include "TresMove3_GigasBase_BoosterAir.generated.h"

UCLASS(HideDropdown)
class UTresMove3_GigasBase_BoosterAir : public UTresLocomotionDefinitionAirCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideAccelMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrideAccelAcceleration;
    
    UTresMove3_GigasBase_BoosterAir();
};

