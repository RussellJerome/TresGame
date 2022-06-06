#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "EX354_ArtemaWarpShotSet.h"
#include "TresProjectile_e_ex354_ArtemaWarpShotSpawner.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex354_ArtemaWarpShotSpawner : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FEX354_ArtemaWarpShotSet m_ShotSet;
    
public:
    ATresProjectile_e_ex354_ArtemaWarpShotSpawner();
};

