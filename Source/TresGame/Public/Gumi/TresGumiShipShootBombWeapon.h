#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipShootWeaponBase.h"
#include "TresGumiShipShootBombWeapon.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipShootBombWeapon : public UTresGumiShipShootWeaponBase {
    GENERATED_BODY()
public:
    UTresGumiShipShootBombWeapon();
};

