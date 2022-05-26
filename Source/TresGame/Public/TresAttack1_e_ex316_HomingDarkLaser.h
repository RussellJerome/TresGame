#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIIE_Base.h"
#include "TresHomingDarkLaserSpawnParams_e_ex316.h"
#include "TresAttack1_e_ex316_HomingDarkLaser.generated.h"

class USoundBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex316_HomingDarkLaser : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsCoopAction: 1;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_CooperationVoice;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SpawnSameTimeNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeginLaserIrradiationTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserShiftMinTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserShiftMaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserIrradiationSignTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserIrradiationLoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LaserExtendSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    FTresHomingDarkLaserSpawnParams_e_ex316 m_HomingDarkLaserSpawnParam;
    
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
    
    UTresAttack1_e_ex316_HomingDarkLaser();
};

