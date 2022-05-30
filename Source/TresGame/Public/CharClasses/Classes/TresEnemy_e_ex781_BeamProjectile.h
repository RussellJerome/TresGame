#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresEnemy_e_ex781_BeamProjectile.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class ATresCharPawnBase;
class ATresPawnBase;

UCLASS()
class ATresEnemy_e_ex781_BeamProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ExtendSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartPitchOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchAddSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchSpeedMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BGHitParticleData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackDataIDName;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_ChaseTarget;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ChaseTargetRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_MoveBGHitEffect;
    
private:
    UPROPERTY(Export)
    UParticleSystemComponent* m_BGHitParticle;
    
    UPROPERTY()
    ATresCharPawnBase* m_Target;
    
    UPROPERTY()
    ATresPawnBase* m_MyParent;
    
public:
    ATresEnemy_e_ex781_BeamProjectile();
};

