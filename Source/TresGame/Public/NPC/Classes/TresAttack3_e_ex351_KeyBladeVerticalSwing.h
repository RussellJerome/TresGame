#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex351_Base.h"
#include "TresAttack3_e_ex351_KeyBladeVerticalSwing.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack3_e_ex351_KeyBladeVerticalSwing : public UTresAttack_e_ex351_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_HitCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackHitAfterKeepDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OverrunDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bFinishAttack: 1;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TractionMinScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TractionMaxScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_KeepDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MovedCorrectionRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotCorrectionAngle;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    float m_GravityScale;
    
    UTresAttack3_e_ex351_KeyBladeVerticalSwing();
};

