#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyGroupDisappearType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipEnemyGroupDisappearType : uint8 {
    LIFE_TIME_OUT,
    SPLINE_PATH_END_ARRIVED,
    OTHER_ENEMY_GROUP_APPEAR,
    NON_DISAPPEAR_TYPE,
    DISAPPEAR_TYPE_MAX UMETA(Hidden),
};

