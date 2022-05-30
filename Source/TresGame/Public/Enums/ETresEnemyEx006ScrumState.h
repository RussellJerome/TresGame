#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx006ScrumState.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx006ScrumState : uint8 {
    WARP,
    IDLE,
    WANTED_TURN,
    TURN,
    WANTED_DASH,
    DASH,
    MAX,
};

