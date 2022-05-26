#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx351WarpDirection.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx351WarpDirection : uint8 {
    Front,
    Back,
    Right,
    Left,
    TimeRush,
    Max,
};

