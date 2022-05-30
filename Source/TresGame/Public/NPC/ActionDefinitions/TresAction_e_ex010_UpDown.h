#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex010_UpDown.generated.h"

UCLASS(HideDropdown)
class UTresAction_e_ex010_UpDown : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fAccel;
    
    UTresAction_e_ex010_UpDown();
};

