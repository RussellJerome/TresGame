#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex771_Rotation.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex771_Rotation : public UTresAttackDefinitionBase {
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
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_pro_AtkHitCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkHitInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkHitMoveSpeed;
    
public:
    UTresAttack4_e_ex771_Rotation();
};

