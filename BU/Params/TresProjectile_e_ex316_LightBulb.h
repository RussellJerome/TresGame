#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex316_LightBulb.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectile_e_ex316_DarkLaser;

UCLASS(HideDropdown)
class ATresProjectile_e_ex316_LightBulb : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_CanterDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkLaserCoveringEffectData;
    
private:
    UPROPERTY()
    ATresProjectile_e_ex316_DarkLaser* m_DarkLaser;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_DarkLaserCoveringEffectCmp;
    
public:
    ATresProjectile_e_ex316_LightBulb();
};

