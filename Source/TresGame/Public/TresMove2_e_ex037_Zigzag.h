#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove2_e_ex037_Zigzag.generated.h"

UCLASS(HideDropdown)
class UTresMove2_e_ex037_Zigzag : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_FlightLoopPlayRate;
    
public:
    UTresMove2_e_ex037_Zigzag();
};

