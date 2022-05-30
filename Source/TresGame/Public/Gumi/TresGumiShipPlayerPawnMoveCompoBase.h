#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerMovementCompoBase.h"
#include "TresGumiShipPlayerPawnMoveCompoBase.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerPawnMoveCompoBase : public UTresGumiShipPlayerMovementCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipPlayerPawnMoveCompoBase();
};

