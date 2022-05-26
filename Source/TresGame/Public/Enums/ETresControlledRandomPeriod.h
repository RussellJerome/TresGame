#pragma once
#include "CoreMinimal.h"
#include "ETresControlledRandomPeriod.generated.h"

UENUM(BlueprintType)
namespace ETresControlledRandomPeriod {
    enum Type {
        NoRandom,
        VeryLowRandom,
        LowRandom,
        MediumRandom,
        PureRandom,
        Custom,
    };
}

