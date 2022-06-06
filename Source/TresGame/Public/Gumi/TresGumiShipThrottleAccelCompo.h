#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerAccelerationBase.h"
#include "TresGumiShipThrottleAccelCompo.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipThrottleAccelCompo : public UTresGumiShipPlayerAccelerationBase {
    GENERATED_BODY()
public:
    UTresGumiShipThrottleAccelCompo();
};

