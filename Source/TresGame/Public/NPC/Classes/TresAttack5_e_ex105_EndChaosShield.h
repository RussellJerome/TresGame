#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex105_EndChaosShield.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex105_EndChaosShield : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeMotPlayRateNormalChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeRotSpeedNormalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeAtkCollEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_CubeNormalEffChangeTime;
    
public:
    UTresAttack5_e_ex105_EndChaosShield();
};

