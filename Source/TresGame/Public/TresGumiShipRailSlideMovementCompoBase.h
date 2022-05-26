#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerPawnMoveCompoBase.h"
#include "TresGumiShipRailSlideMovementCompoBase.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipRailSlideMovementCompoBase : public UTresGumiShipPlayerPawnMoveCompoBase {
    GENERATED_BODY()
public:
    UTresGumiShipRailSlideMovementCompoBase();
};

