#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_bx903_Punch.generated.h"

class ATresProjectileBase;
class UParticleSystem;
class USoundBase;

UCLASS(HideDropdown)
class UTresAttack1_e_bx903_Punch : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_ChangeRotateDigRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetRotateTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetRotateDigRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetRotateMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TargetRotateMoveZRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AdditionalSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PunchPitchDig;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackExplosionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ImpactLeaveTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LeaveEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GatherTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_GatherMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ExplosionProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreMoveStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreMoveTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreMoveEffectParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreMoveEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_CoreEffectParticle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreUpEndDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreUpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CoreAttackTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AbsorbSEAsset;
    
public:
    UTresAttack1_e_bx903_Punch();
};

