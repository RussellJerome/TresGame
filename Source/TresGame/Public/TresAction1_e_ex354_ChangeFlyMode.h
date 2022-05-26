#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex354_ChangeFlyMode.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex354_ChangeFlyMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bReversed;
    
    UTresAction1_e_ex354_ChangeFlyMode();
};

