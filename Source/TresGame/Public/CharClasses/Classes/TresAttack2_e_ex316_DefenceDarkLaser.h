#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIIE_Base.h"
#include "TresAttack2_e_ex316_DefenceDarkLaser.generated.h"

class ATresProjectile_e_ex316_DefenceDarkLaser;

UCLASS(HideDropdown)
class UTresAttack2_e_ex316_DefenceDarkLaser : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
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
    float m_MinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SignStartRequiredTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SignEndRequiredTime;
    
    UPROPERTY(Transient)
    ATresProjectile_e_ex316_DefenceDarkLaser* m_DefenceDarkLaser;
    
    UTresAttack2_e_ex316_DefenceDarkLaser();
};

