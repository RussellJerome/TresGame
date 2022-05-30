#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerPawnMoveCompoBase.h"
#include "TresGumiShipPlayerDefaultMovementCompo.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerDefaultMovementCompo : public UTresGumiShipPlayerPawnMoveCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipPlayerDefaultMovementCompo();
};

