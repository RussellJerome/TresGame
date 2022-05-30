#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx351TimeRushEvent.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx351TimeRushEvent : uint8 {
    TimeRushFinishMoveCenter,
    TimeRushFinishInvincible,
    Max,
};

