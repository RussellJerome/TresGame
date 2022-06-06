#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_DefenceDarkLaser.generated.h"

class UParticleSystem;
class UCurveFloat;

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_DefenceDarkLaser : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LightBulbEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkLaserEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkLaserCoveringEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkLaserDecalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkLaserLength;
    
    UPROPERTY(EditDefaultsOnly)
    float m_CanterDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DarkLaserDecalSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_DarkLaserRotateSpeedCurveData;
    
public:
    ATresProjectile_e_ex352_DefenceDarkLaser();
};

