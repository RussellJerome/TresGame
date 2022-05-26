#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresBitProjectile_e_ex357.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresBitProjectile_e_ex357 : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_GroundHitEffect;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bGroundHitEffectSpawnHitNormal: 1;
    
public:
    ATresBitProjectile_e_ex357();
};

