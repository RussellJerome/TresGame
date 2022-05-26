#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "TresProjectile_e_ex711_Missile.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex711_Missile : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_FireEff;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_FireEffData;
    
public:
    ATresProjectile_e_ex711_Missile();
};

