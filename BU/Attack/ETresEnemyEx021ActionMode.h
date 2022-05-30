#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx021ActionMode.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx021ActionMode : uint8 {
    NORMAL,
    LONGSTUNNED,
    BOARDED,
    BOARDED_TURNAROUND,
    SMALLDAMAGE,
    MAX,
};

