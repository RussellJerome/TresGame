#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttractionPawnBase.h"
#include "TresAttractionPawnRollerCoaster.generated.h"

class ATresCharPawnBase;
class ATresPawnBase;
class UParticleSystem;
class ATresProjectileBase;
class UParticleSystemComponent;

UCLASS()
class ATresAttractionPawnRollerCoaster : public ATresAttractionPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCharPawnBase> m_RailEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RailEffectLeadDist;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresAttractionPawnBase> m_PassengerCarClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_NumOfPassengerCar;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresCharPawnBase> m_LeadMarkerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresPawnBase> m_GateEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LeadMarkerLeadTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<UParticleSystem*> m_AppendEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ProjectileFireEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ProjectileHitEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ProjectileMatchlessHitEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileMatchlessParticleReactionRange;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ProjectileHitMapEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ProjectileNoHitEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FinishProjectileEffectAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RapidFireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireVoiceIntervalMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FireVoiceIntervalMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fJumpAfterWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAutoFinishCommand: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishCommandTimer;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishStartWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishAttackWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishEndWaitTime;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjNormal;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjMatchlessNormal;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjWeak;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjFinish;
    
protected:
    UPROPERTY(Export)
    UParticleSystemComponent* m_AttachEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_AttachEffect2;
    
public:
    ATresAttractionPawnRollerCoaster();
};

