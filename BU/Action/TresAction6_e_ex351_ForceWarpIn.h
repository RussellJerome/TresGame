#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction6_e_ex351_ForceWarpIn.generated.h"

UCLASS(HideDropdown)
class UTresAction6_e_ex351_ForceWarpIn : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bTimeRushActionAbortWait: 1;
    
    UTresAction6_e_ex351_ForceWarpIn();
};

