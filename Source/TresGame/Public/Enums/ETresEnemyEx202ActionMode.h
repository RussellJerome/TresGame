#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx202ActionMode.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx202ActionMode : uint8 {
    TRES_ENEMY_EX202_ACTIONMODE_SNAKE,
    TRES_ENEMY_EX202_ACTIONMODE_FLOWER,
    TRES_ENEMY_EX202_ACTIONMODE_MAX UMETA(Hidden),
};

