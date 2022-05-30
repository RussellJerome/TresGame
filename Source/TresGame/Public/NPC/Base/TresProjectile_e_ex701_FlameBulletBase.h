#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex701_FlameBulletBase.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex701_FlameBulletBase : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableHitNormal: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableHitBird: 1;
    
public:
    ATresProjectile_e_ex701_FlameBulletBase();
};

