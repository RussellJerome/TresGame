#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIIE_Base.h"
#include "ETresEnemyEx302SlowEndKind.h"
#include "TresAttack2_e_ex302_MaliceWhip.generated.h"

class UParticleSystem;
class ATresProjectileBase;
class ATresProjectile_e_ex302_MaliceWhipContinuousHit;
class USoundBase;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack2_e_ex302_MaliceWhip : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresEnemyEx302SlowEndKind m_SlowEndKind;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_NegativeReversalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_ChangeLastAttackHitNum;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_SmallContinuousProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowRateStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlowStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SmallContinuousStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AnnihilationStartVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AnnihilationHitVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_StartVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_HitVoice;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_NegativeReversalEffectCmp;
    
    UPROPERTY()
    ATresProjectile_e_ex302_MaliceWhipContinuousHit* m_MaliceWhipContinuousProjectile;
    
public:
    UTresAttack2_e_ex302_MaliceWhip();
};

