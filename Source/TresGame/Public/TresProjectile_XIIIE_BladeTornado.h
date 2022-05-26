#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_XIIIE_BladeTornado.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresProjectile_XIIIE_BladeTornado : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BladeTornadoAppearData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BladeTornadoAppearCmp;
    
    ATresProjectile_XIIIE_BladeTornado();
};

