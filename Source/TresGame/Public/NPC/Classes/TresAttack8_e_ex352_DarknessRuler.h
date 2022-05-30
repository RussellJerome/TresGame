#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_XIIILE_Base.h"
#include "TresHomingDarkLaserSpawnParams_e_ex352.h"
#include "TresAttack8_e_ex352_DarknessRuler.generated.h"

class UParticleSystem;
class USoundBase;
class ATresWaterCurrentSplineActor;
class UCurveFloat;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class UTresAttack8_e_ex352_DarknessRuler : public UTresAttack_XIIILE_Base {
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
    USoundBase* m_StartVoice;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* m_ExplosionVoice;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<float> m_DarkLaserSpawnIntervals;
    
    UPROPERTY(EditDefaultsOnly)
    FTresHomingDarkLaserSpawnParams_e_ex352 m_HomingDarkLaserSpawnParam;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* m_ExplosionRangeEffectCmp;
    
    UTresAttack8_e_ex352_DarknessRuler();
};

