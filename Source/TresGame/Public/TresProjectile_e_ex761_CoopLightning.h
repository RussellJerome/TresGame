#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex761_CoopLightning.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex761_CoopLightning : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SignEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DoFireDelayTime;
    
public:
    ATresProjectile_e_ex761_CoopLightning();
};

