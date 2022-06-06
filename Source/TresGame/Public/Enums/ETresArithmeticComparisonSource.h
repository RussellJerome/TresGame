#pragma once
#include "CoreMinimal.h"
#include "ETresArithmeticComparisonSource.generated.h"

UENUM(BlueprintType)
namespace ETresArithmeticComparisonSource {
    enum Type {
        Blackboard,
        ActorProperty,
        ActorFunction,
        LiteralValue,
    };
}

