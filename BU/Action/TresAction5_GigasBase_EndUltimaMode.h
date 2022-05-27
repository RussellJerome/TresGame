#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction5_GigasBase_EndUltimaMode.generated.h"

UCLASS(HideDropdown)
class UTresAction5_GigasBase_EndUltimaMode : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_OverheatTime;
    
    UTresAction5_GigasBase_EndUltimaMode();
};

