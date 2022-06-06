#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ClusterShotExplosion.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex354_ClusterShotExplosion : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AtkCollGrpName_DisableOnMove;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AtkCollGrpName_EnableOnMove;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AtkCollAtkIDName_EnableOnMove;
    
    ATresProjectile_e_ex354_ClusterShotExplosion();
};

