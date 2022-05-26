#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex773_Tornado.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_e_ex773_Tornado : public UTresAttackDefinitionBase {
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
    float HitRootTransScale;
    
    UPROPERTY(EditDefaultsOnly)
    float GuardRootTransScale;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveHitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxHitLength;
    
public:
    UTresAttack5_e_ex773_Tornado();
};

