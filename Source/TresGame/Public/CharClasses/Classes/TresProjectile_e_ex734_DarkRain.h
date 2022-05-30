#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex734_DarkRain.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex734_DarkRain : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PawnHitEffectClass;
    
public:
    ATresProjectile_e_ex734_DarkRain();
};

