#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_fz903_ShakeOff.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_fz903_ShakeOff : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_ShakeOffLoopTime;
    
public:
    UTresAction3_e_fz903_ShakeOff();
};

