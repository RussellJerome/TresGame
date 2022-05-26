#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex359_HeavyRainAtkCol.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex359_HeavyRainAtkCol : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fAtkCollProjYawOffset;
    
    ATresProjectile_e_ex359_HeavyRainAtkCol();
};

