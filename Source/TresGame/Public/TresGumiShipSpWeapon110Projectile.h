#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipSpWeapon110Projectile.generated.h"

UCLASS(Abstract)
class ATresGumiShipSpWeapon110Projectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StraightLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IntervalTime;
    
    ATresGumiShipSpWeapon110Projectile();
};

