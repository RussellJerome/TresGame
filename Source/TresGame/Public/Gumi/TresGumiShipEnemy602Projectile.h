#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy602Projectile.generated.h"

UCLASS()
class ATresGumiShipEnemy602Projectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector FirstVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FireTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HomingSpan;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRotator LimitRotation;
    
    ATresGumiShipEnemy602Projectile();
};

