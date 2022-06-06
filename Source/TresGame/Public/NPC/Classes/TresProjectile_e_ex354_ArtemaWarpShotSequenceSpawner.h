#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "EX354_ArtemaWarpShotSequenceInfoSet.h"
#include "TresProjectile_e_ex354_ArtemaWarpShotSequenceSpawner.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex354_ArtemaWarpShotSequenceSpawner : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FEX354_ArtemaWarpShotSequenceInfoSet m_SequenceInfoSet;
    
public:
    ATresProjectile_e_ex354_ArtemaWarpShotSequenceSpawner();
};

