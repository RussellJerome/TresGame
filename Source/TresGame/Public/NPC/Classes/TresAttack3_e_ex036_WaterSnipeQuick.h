#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex036_WaterSnipeQuick.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex036_WaterSnipeQuick : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TotalScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
public:
    UTresAttack3_e_ex036_WaterSnipeQuick();
};

