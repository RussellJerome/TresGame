#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipLockonPrimitive.h"
#include "TresGumiShipTrackingPrimitive.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipTrackingPrimitive : public UTresGumiShipLockonPrimitive {
    GENERATED_BODY()
public:
    UTresGumiShipTrackingPrimitive();
};

