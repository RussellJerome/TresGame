#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex721_Darkbird.generated.h"

UCLASS(HideDropdown)
class ATresProjectile_e_ex721_Darkbird : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex721_Darkbird();
    UFUNCTION()
    void OnTickMove(float InDeltaTime);
    
};

