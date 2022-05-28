#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw401_DevilAvalancheBullet.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_dw401_DevilAvalancheBullet : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PCHitEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VanishEffData;
    
    ATresProjectile_e_dw401_DevilAvalancheBullet();
};

