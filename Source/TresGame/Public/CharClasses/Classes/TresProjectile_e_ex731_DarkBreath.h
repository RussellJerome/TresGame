#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex731_DarkBreath.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex731_DarkBreath : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool m_bNoSmokeEffectOnGuard;
    
    UPROPERTY(EditAnywhere)
    float m_fSmokeEffectTime;
    
    ATresProjectile_e_ex731_DarkBreath();
};

