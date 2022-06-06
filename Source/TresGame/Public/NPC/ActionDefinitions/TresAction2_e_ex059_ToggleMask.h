#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex059_ToggleMask.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex059_ToggleMask : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bToggleMask;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bToMaskOn;
    
    UTresAction2_e_ex059_ToggleMask();
};

