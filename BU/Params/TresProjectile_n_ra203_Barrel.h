#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_n_ra203_Barrel.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_n_ra203_Barrel : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BarrelEffData;
    
    ATresProjectile_n_ra203_Barrel();
};

