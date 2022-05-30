#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIILE_Base.h"
#include "TresHomingDarkLaserSpawnParams_e_ex352.h"
#include "TresVoice_e_ex352.h"
#include "TresAttack1_e_ex352_HomingDarkLaser.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex352_HomingDarkLaser : public UTresAttack_XIIILE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FTresHomingDarkLaserSpawnParams_e_ex352 m_HomingDarkLaserSpawnParam;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartMovementCorrectionDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MovementSpeedCorrection;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxMovementCorrectionSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinMovementCorrectionSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresVoice_e_ex352> m_VoiceArray;
    
public:
    UTresAttack1_e_ex352_HomingDarkLaser();
};

