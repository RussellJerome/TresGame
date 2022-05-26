#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex036_Attack1.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex036_Attack1 : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_TailEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_TailEffData;
    
    ATresProjectile_e_ex036_Attack1();
};

