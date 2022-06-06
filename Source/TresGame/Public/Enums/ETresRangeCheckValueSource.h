#pragma once
#include "CoreMinimal.h"
#include "ETresRangeCheckValueSource.generated.h"

UENUM(BlueprintType)
namespace ETresRangeCheckValueSource {
    enum Type {
        LiteralValue,
        Blackboard,
    };
}

