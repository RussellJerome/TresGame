#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ca901_TentacleSummons.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ca901_TentacleSummons : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_WaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EndTentacleSummonsNum;
    
    UTresAction2_e_ca901_TentacleSummons();
};

