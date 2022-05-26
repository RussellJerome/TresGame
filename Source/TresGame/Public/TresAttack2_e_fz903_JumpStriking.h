#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_fz903_JumpStriking.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_fz903_JumpStriking : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_JumpHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpDecelerationXYSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpMinXYSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownGravityScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DownHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxAngleUpDecelerationXYSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxAngleDistance;
    
public:
    UTresAttack2_e_fz903_JumpStriking();
};

