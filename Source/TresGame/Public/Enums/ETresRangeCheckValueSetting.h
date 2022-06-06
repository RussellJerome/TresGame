#pragma once
#include "CoreMinimal.h"
#include "ETresRangeCheckValueSetting.generated.h"

UENUM(BlueprintType)
namespace ETresRangeCheckValueSetting {
    enum Type {
        Minimum,
        Maximum,
        Range,
    };
}

