#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex003_Attack1.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex003_Attack1 : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_MinScale;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxScale;
    
    ATresProjectile_e_ex003_Attack1();
};

