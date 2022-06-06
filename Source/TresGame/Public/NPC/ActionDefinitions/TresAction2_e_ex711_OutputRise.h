#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex711_OutputRise.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex711_OutputRise : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RiseHeight;
    
    UTresAction2_e_ex711_OutputRise();
};

