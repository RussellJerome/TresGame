#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_bx901_BackBoost.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_bx901_BackBoost : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fBackAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBackMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBrakeAccel;
    
    UTresAction3_e_bx901_BackBoost();
};

