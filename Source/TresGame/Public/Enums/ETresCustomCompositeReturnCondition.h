#pragma once
#include "CoreMinimal.h"
#include "ETresCustomCompositeReturnCondition.generated.h"

UENUM(BlueprintType)
namespace ETresCustomCompositeReturnCondition {
    enum Type {
        FirstSuccess,
        FirstFailure,
        LastNodeCompletes,
    };
}

