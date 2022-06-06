#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx302WarpDirection.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx302WarpDirection : uint8 {
    Front,
    Back,
    Right,
    Left,
    Max,
};

