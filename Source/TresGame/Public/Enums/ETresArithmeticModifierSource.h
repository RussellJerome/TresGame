#pragma once
#include "CoreMinimal.h"
#include "ETresArithmeticModifierSource.generated.h"

UENUM(BlueprintType)
namespace ETresArithmeticModifierSource {
    enum Type {
        Blackboard,
        ActorProperty,
        ActorFunction,
        LiteralValue,
    };
}

