#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex054_VolcanoBullet.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex054_VolcanoBullet : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BgHitEffData;
    
    ATresProjectile_e_ex054_VolcanoBullet();
};

