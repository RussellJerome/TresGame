#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ArtemaShot.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex354_ArtemaShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FireEffect;
    
    ATresProjectile_e_ex354_ArtemaShot();
};

