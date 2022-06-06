#pragma once
#include "CoreMinimal.h"
#include "ETresRandomEntryCooldownProbabilitySource.generated.h"

UENUM(BlueprintType)
namespace ETresRandomEntryCooldownProbabilitySource {
    enum Type {
        LiteralValue,
        Blackboard,
    };
}

