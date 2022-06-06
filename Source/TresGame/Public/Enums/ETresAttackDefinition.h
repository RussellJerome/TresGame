#pragma once
#include "CoreMinimal.h"
#include "ETresAttackDefinition.generated.h"

UENUM(BlueprintType)
namespace ETresAttackDefinition {
    enum Type {
        Unknown,
        Melee,
        Ranged,
        Dash,
        Jump,
        Custom,
    };
}

