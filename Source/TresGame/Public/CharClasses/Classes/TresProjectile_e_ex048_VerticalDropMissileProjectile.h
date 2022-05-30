#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "TresProjectile_e_ex048_VerticalDropMissileProjectile.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresProjectile_e_ex048_VerticalDropMissileProjectile : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ImpactPointEffectData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ImpactPointEffectComponent;
    
public:
    ATresProjectile_e_ex048_VerticalDropMissileProjectile();
};

