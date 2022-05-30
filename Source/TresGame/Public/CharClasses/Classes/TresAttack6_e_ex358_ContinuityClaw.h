#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex358_Base.h"
#include "TresAttack6_e_ex358_ContinuityClaw.generated.h"

UCLASS(HideDropdown)
class UTresAttack6_e_ex358_ContinuityClaw : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ForceEnableHomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAnglePITCH;
    
public:
    UTresAttack6_e_ex358_ContinuityClaw();
};

