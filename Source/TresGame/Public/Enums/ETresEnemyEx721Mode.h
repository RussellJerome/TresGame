#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx721Mode.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx721Mode : uint8 {
    TRES_ENEMY_EX721_NORMAL_MODE,
    TRES_ENEMY_EX721_TOWER_MODE,
    TRES_ENEMY_EX721_MAX UMETA(Hidden),
};

