#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx761_Location.generated.h"

UENUM(BlueprintType)
namespace ETresEnemyEx761_Location {
    enum Type {
        Home,
        Center,
        Max,
        ETresEnemyEx761_MAX UMETA(Hidden),
    };
}

