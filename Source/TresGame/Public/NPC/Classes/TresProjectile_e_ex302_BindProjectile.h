#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ex302_BindProjectile.generated.h"

UCLASS(HideDropdown)
class ATresProjectile_e_ex302_BindProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex302_BindProjectile();
    UFUNCTION()
    void HandleOnImpact(const FHitResult& HitResult);
    
};

