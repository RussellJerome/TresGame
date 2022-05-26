#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex326_DarkRush.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex326_DarkRush : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeEndTime;
    
    UTresAttack6_e_ex326_DarkRush();
};

