#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex016_FallScratching.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex016_FallScratching : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHeight;
    
public:
    UTresAttack4_e_ex016_FallScratching();
};

