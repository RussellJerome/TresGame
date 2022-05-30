#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex048_ChangeFlyMode.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex048_ChangeFlyMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpGravityScale;
    
    UTresAction2_e_ex048_ChangeFlyMode();
};

