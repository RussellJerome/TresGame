#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_bx901_RailSlideHold.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_bx901_RailSlideHold : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxHoldTime;
    
    UTresAction2_e_bx901_RailSlideHold();
};

