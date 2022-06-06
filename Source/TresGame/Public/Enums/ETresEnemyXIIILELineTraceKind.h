#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyXIIILELineTraceKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyXIIILELineTraceKind : uint8 {
    None,
    Horizontal,
    Vertical,
    Both,
    Max,
};

