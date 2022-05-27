#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_ex308_PhantomBlitzBase.generated.h"

class UAnimSequenceBase;
class UParticleSystem;

UCLASS(HideDropdown)
class UTresAttack3_e_ex308_PhantomBlitzBase : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_StartAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_ChangeAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_FinishAnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LightChangeEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnaroundWeaponMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponRotationSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumTurnaround;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartTurnaroundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TurnaroundSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_QuickTurnaroundRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartQuickTurnaroundDistance;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsEnableAttackHitIgnore: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackCollisionGroupName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackCollisionIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_OverrideFinishAttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WeaponGroundEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponGroundEffectSpawnDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_AuraParticleSystem;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WeaponAuraParticleSystem;
    
public:
    UTresAttack3_e_ex308_PhantomBlitzBase();
};

