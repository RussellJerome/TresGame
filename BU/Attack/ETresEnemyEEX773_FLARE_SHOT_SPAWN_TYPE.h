#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEEX773_FLARE_SHOT_SPAWN_TYPE.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEEX773_FLARE_SHOT_SPAWN_TYPE : uint8 {
    SPAWN_TYPE_LR,
    SPAWN_TYPE_L,
    SPAWN_TYPE_R,
    SPAWN_TYPE_MAX UMETA(Hidden),
};

