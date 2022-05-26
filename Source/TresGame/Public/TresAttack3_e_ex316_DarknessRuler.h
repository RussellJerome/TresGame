#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIIE_Base.h"
#include "TresAttack3_e_ex316_DarknessRuler.generated.h"

class UParticleSystem;
class USoundBase;
class ATresWaterCurrentSplineActor;
class UCurveFloat;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack3_e_ex316_DarknessRuler : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_ExplosionSignTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StartAttackMotionTime;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ExplosionRangeEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWaterCurrentSplineActor> m_WaterSplineClass;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DarknessRulerWindForceCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DarknessRulerPullVelocityCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DarknessRulerColorChangeCurveData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WindInvalidRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LoopMotionTime;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AnnihilationStartVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_AnnihilationExplosionVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_StartVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_ExplosionVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_CooperationVoice;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ExplosionRangeEffectCmp;
    
    UTresAttack3_e_ex316_DarknessRuler();
};

