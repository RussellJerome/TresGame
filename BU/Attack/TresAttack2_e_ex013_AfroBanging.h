#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex013_AfroBanging.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex013_AfroBanging : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireInitSpeedMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireInitSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Attack2_FireInitSpeedDiv;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireSpeed2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireSpeed2Max;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireSpeedChangeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FallSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_LifeTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireAnglePitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireAnglePitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Attack2_FireAnglePitchDiv;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireAngleYawMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireAngleYawMax;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Attack2_FireAngleYawDiv;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Attack2_OneShotBulletNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireRot1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireRot2;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_FireRot3;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_StHomingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_HomingYawInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_HomingYawAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_HomingYawMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_TargetAimDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Attack2_HomingDisableDist;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_Attack2_HomingNum;
    
public:
    UTresAttack2_e_ex013_AfroBanging();
};

