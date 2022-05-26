#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex037_ThunderShotImpact.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex037_ThunderShotImpact : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_ImpactEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ImpactEffData;
    
    ATresProjectile_e_ex037_ThunderShotImpact();
};

