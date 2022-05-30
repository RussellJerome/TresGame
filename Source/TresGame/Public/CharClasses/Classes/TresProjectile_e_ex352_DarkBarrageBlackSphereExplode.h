#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_DarkBarrageBlackSphereExplode.generated.h"

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_DarkBarrageBlackSphereExplode : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_InitHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxHomingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StopHomingTargetSpeed;
    
    ATresProjectile_e_ex352_DarkBarrageBlackSphereExplode();
};

