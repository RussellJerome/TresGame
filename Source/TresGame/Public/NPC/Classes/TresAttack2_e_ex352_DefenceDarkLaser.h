#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "TresVoice_e_ex352.h"
#include "TresAttack2_e_ex352_DefenceDarkLaser.generated.h"

class UCurveFloat;
class ATresProjectile_e_ex352_DefenceDarkLaser;

UCLASS(HideDropdown)
class UTresAttack2_e_ex352_DefenceDarkLaser : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeginLaserIrradiationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserIrradiationSignTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserIrradiationLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserExtendSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DeccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_MoveSpeedCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FloorHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecelerationWhenGuarded;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DecelerationWhenTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SignStartRequiredTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SignEndRequiredTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresVoice_e_ex352> m_VoiceArray;
    
    UPROPERTY(Transient)
    ATresProjectile_e_ex352_DefenceDarkLaser* m_DefenceDarkLaser;
    
public:
    UTresAttack2_e_ex352_DefenceDarkLaser();
};

