#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex773_Beat.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex773_Beat : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_HomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TgtDist;
    
    UPROPERTY(EditDefaultsOnly)
    float warp_ck_height;
    
    UPROPERTY(EditDefaultsOnly)
    float warp_height;
    
    UPROPERTY(EditDefaultsOnly)
    float warp_dist;
    
public:
    UTresAttack6_e_ex773_Beat();
};

