#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction6_e_ex355_BerserkCharge.generated.h"

UCLASS(HideDropdown)
class UTresAction6_e_ex355_BerserkCharge : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxTime;
    
    UTresAction6_e_ex355_BerserkCharge();
};

