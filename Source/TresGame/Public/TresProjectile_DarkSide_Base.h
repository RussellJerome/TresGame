#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_DarkSide_Base.generated.h"

class UParticleSystem;

UCLASS()
class ATresProjectile_DarkSide_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LandHitEffData;
    
    ATresProjectile_DarkSide_Base();
};

