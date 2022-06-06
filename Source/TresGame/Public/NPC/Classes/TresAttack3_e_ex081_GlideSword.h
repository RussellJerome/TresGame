#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex081_GlideSword.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex081_GlideSword : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordStartTurnRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordStartLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordInitialMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordAccelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordMaxMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngleXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngleZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomigMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngleToEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordEndInitialMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordEndDecelMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordEndMinMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GlideSwordEndAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TiltNormalRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WallHitEndAngle;
    
public:
    UTresAttack3_e_ex081_GlideSword();
};

