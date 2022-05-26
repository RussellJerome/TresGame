#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ClusterShotMove.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex354_ClusterShotMove : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bExplodeOnWallHit;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_bAttackCollProcessOnSpawn;
    
    ATresProjectile_e_ex354_ClusterShotMove();
};

