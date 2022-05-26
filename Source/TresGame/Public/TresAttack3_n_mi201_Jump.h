#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack3_n_mi201_Jump.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_n_mi201_Jump : public UTresNpcAttackDefinitionBase {
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
    float m_DownHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownAccelSpeed;
    
public:
    UTresAttack3_n_mi201_Jump();
};

