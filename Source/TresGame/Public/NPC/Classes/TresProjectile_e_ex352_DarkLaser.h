#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_DarkLaser.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_DarkLaser : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitLandEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BurntMarkEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkLaserLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingRateXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingRateZ;
    
public:
    ATresProjectile_e_ex352_DarkLaser();
};

