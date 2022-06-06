#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex361_Aura.generated.h"

UCLASS(HideDropdown)
class UTresAction2_e_ex361_Aura : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeEndTime;
    
public:
    UTresAction2_e_ex361_Aura();
};

