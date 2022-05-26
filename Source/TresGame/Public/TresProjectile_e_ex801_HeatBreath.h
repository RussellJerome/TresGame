#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex801_HeatBreath.generated.h"

class UParticleSystem;
class ATresSplineParticleActor;

UCLASS()
class ATresProjectile_e_ex801_HeatBreath : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MapHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresSplineParticleActor> m_SplineParticleActorClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ExtendSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AtkCollWidth;
    
public:
    ATresProjectile_e_ex801_HeatBreath();
};

