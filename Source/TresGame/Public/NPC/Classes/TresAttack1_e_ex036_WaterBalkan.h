#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex036_WaterBalkan.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex036_WaterBalkan : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireRotYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireRotPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireYawOffset;
    
public:
    UTresAttack1_e_ex036_WaterBalkan();
};

