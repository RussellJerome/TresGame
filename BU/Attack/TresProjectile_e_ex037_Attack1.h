#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "TresProjectile_e_ex037_Attack1.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex037_Attack1 : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WallHitEffData;
    
    ATresProjectile_e_ex037_Attack1();
};

