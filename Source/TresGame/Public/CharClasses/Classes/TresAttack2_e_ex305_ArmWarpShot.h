#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "ETresEnemy_e_ex305_ArmWarpType.h"
#include "TresAttack2_e_ex305_ArmWarpShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex305_ArmWarpShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemy_e_ex305_ArmWarpType m_pro_ArmWarpType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_WarpArmDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ArmWarpPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ArmWarpYaw;
    
public:
    UTresAttack2_e_ex305_ArmWarpShot();
};

