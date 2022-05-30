#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_LightBulbScattering.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_LightBulbScattering : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkLaserEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitLandEffectData;
    
public:
    ATresProjectile_e_ex352_LightBulbScattering();
};

