#pragma once
#include "CoreMinimal.h"
#include "ETresHateModifier.generated.h"

UENUM(BlueprintType)
namespace ETresHateModifier {
    enum Type {
        Blackboard,
        Everyone,
        EveryoneExcludeBlackboard,
    };
}

