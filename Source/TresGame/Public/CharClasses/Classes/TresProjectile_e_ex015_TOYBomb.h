#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex015_TOYBomb.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex015_TOYBomb : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex015_TOYBomb();
protected:
    UFUNCTION()
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
};

