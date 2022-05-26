#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex003_Attack2.generated.h"

UCLASS(Abstract)
class ATresProjectile_e_ex003_Attack2 : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_HomingInitialSpeed;
    
    ATresProjectile_e_ex003_Attack2();
    UFUNCTION()
    void OnTickMove(float InDeltaTime);
    
};

