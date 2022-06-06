#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "EX359_LaserWaveInfoSet.h"
#include "EX359_LaserOnTimeInfoSet.h"
#include "TresProjectile_e_ex359_LaserSpawner.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex359_LaserSpawner : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FEX359_LaserWaveInfoSet m_LaserWaveInfoSet;
    
    UPROPERTY()
    FEX359_LaserOnTimeInfoSet m_LaserOnTimeInfoSet;
    
public:
    ATresProjectile_e_ex359_LaserSpawner();
};

