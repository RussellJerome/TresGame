#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipWeaponManager.generated.h"

UCLASS(Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipWeaponManager : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipWeaponManager();
};

