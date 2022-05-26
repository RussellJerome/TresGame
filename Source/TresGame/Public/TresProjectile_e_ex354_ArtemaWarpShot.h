#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ArtemaWarpShot.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresProjectile_e_ex354_ArtemaWarpShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ShotSpawnEffect;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ShotSpawnEffectComp;
    
    ATresProjectile_e_ex354_ArtemaWarpShot();
};

