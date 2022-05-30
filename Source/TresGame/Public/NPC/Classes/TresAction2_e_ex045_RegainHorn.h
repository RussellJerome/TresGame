#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex045_RegainHorn.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex045_RegainHorn : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fRegainSpeed;
    
    UTresAction2_e_ex045_RegainHorn();
};

