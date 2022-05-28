#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex352_DarkGalaxyBlackSphere.generated.h"

UCLASS(HideDropdown)
class ATresProjectile_e_ex352_DarkGalaxyBlackSphere : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_DotAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PassDistance;
    
public:
    ATresProjectile_e_ex352_DarkGalaxyBlackSphere();
};

