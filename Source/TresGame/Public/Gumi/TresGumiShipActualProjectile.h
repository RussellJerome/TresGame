#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAppearanceProjectileBase.h"
#include "TresGumiShipActualProjectile.generated.h"

UCLASS(Abstract)
class ATresGumiShipActualProjectile : public ATresGumiShipAppearanceProjectileBase {
    GENERATED_BODY()
public:
    ATresGumiShipActualProjectile();
};

