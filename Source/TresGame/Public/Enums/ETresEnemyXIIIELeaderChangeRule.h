#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyXIIIELeaderChangeRule.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyXIIIELeaderChangeRule : uint8 {
    Alternate,
    LessFrequent,
    Random,
    LowerHitPoint,
    HigherHitPoint,
    MAX,
};

