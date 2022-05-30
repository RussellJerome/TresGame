#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex358_Base.h"
#include "TresAttack5_e_ex358_Rush.generated.h"

class USoundBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack5_e_ex358_Rush : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WarpEffectIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingEndTargetDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngleYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAnglePITCH;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bDisablePlayVoiceAvatar: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bStartPlayVoice3D: 1;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<USoundBase*> m_StartPlayVoiceDataList;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WarpEffect;
    
public:
    UTresAttack5_e_ex358_Rush();
};

