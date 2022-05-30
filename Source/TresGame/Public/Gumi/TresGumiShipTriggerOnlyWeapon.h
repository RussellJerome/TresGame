#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipWeaponBase.h"
#include "TresGumiShipTriggerOnlyWeapon.generated.h"

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipTriggerOnlyWeapon : public UTresGumiShipWeaponBase {
    GENERATED_BODY()
public:
    UTresGumiShipTriggerOnlyWeapon();
};

