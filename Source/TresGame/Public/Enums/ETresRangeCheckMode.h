#pragma once
#include "CoreMinimal.h"
#include "ETresRangeCheckMode.generated.h"

UENUM(BlueprintType)
namespace ETresRangeCheckMode {
    enum Type {
        DirectDistance,
        DirectDistance2D,
        DirectDistanceZ,
        PathDistance,
        PathCost,
    };
}

