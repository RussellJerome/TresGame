#pragma once
#include "CoreMinimal.h"
#include "ETresRandomEntryProbabilitySource.generated.h"

UENUM(BlueprintType)
namespace ETresRandomEntryProbabilitySource {
    enum Type {
        LiteralValue,
        Blackboard,
    };
}

