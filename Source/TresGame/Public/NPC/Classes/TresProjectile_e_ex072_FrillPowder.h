#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex072_FrillPowder.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex072_FrillPowder : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fReduceRatio;
    
    ATresProjectile_e_ex072_FrillPowder();
};

