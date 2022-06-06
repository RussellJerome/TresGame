#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex771_Horizontal.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex771_Horizontal : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingDist;
    
public:
    UTresAttack3_e_ex771_Horizontal();
};

