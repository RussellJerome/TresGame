#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex021_Base.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex021_Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SplashEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ExplosionEffData;
    
public:
    ATresProjectile_e_ex021_Base();
};

