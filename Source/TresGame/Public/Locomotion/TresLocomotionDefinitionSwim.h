#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionMercunaBase.h"
#include "TresLocomotionDefinitionSwim.generated.h"

UCLASS(HideDropdown)
class UTresLocomotionDefinitionSwim : public UTresLocomotionDefinitionMercunaBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool m_bWaterSurfaceMovement;
    
public:
    UTresLocomotionDefinitionSwim();
};

