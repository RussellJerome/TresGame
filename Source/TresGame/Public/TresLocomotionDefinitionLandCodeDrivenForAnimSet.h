#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresLocomotionDefinitionLandCodeDrivenForAnimSet.generated.h"

UCLASS(HideDropdown)
class UTresLocomotionDefinitionLandCodeDrivenForAnimSet : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bUseRunStartAnim: 1;
    
    UTresLocomotionDefinitionLandCodeDrivenForAnimSet();
};

