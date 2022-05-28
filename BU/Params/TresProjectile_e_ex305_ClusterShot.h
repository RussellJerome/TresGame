#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex305_ClusterShot.generated.h"

class UParticleSystem;
class ATresProjectile_e_ex305_ClusterShotExplosion;

UCLASS(Abstract)
class ATresProjectile_e_ex305_ClusterShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectile_e_ex305_ClusterShotExplosion* m_ClusterShotExplosion;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ScrollHitEffData;
    
    ATresProjectile_e_ex305_ClusterShot();
};

