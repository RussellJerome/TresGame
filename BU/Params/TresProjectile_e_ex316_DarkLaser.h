#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex316_DarkLaser.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresProjectile_e_ex316_DarkLaser : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitLandEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkLaserLength;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_HitLandEffectCmp;
    
public:
    ATresProjectile_e_ex316_DarkLaser();
};

