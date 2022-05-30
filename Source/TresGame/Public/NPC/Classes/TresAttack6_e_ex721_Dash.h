#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack6_e_ex721_Dash.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack6_e_ex721_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DashEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashInitSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashAccelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashMaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_EndDashDecelSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_EndDashTargetHitNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_BeginLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngleXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngleZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMinDestance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateSpeed;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DashEffectCmp;
    
    UTresAttack6_e_ex721_Dash();
};

