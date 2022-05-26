#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADZeroOneProperties.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADZeroOneProperties {
    enum Type {
        None,
        Velocity,
        RotationalVelocity,
        VelocityFromLocation,
    };
}

