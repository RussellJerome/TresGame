#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "ETres_e_ex352_LightBulbKind.h"
#include "TresProjectile_e_ex352_LightBulb.generated.h"

class UParticleSystem;
class UCurveFloat;

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_LightBulb : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_CanterDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_DarkLaserCoveringEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_LaserProjectileName;
    
    UPROPERTY(EditDefaultsOnly)
    ETres_e_ex352_LightBulbKind m_LightBulbKind;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_RotSpeedCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MoveRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpDownHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_UpDownSpeedCoefficient;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DisableAttackCollisionTime;
    
public:
    ATresProjectile_e_ex352_LightBulb();
};

