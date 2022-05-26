#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex026_Missile.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex026_Missile : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_SmokeEffData;
    
public:
    ATresProjectile_e_ex026_Missile();
};

