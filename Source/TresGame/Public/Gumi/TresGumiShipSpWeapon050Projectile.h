#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSequentialProjectileBase.h"
#include "TresGumiShipSpWeapon050Projectile.generated.h"

UCLASS(Abstract)
class ATresGumiShipSpWeapon050Projectile : public ATresGumiShipSequentialProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SwitchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    ATresGumiShipSpWeapon050Projectile();
};

