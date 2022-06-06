#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_e_bx901_RailSlideMove.generated.h"

UCLASS(HideDropdown)
class UTresAction5_e_bx901_RailSlideMove : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMoveVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bReset;
    
    UTresAction5_e_bx901_RailSlideMove();
};

