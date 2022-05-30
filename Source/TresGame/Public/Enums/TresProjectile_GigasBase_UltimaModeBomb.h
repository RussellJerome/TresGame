#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_GigasBase_UltimaModeBomb.generated.h"

UCLASS(Abstract)
class ATresProjectile_GigasBase_UltimaModeBomb : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_GigasBase_UltimaModeBomb();
    UFUNCTION()
    void OnTickMove(float InDeltaTime);
    
};

