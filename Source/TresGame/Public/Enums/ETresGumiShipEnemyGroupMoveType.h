#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyGroupMoveType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipEnemyGroupMoveType : uint8 {
    FIXED_LOCATION,
    STATIC_SPLINE_PATH_MOVE,
    ATTACHED_SPLINE_PATH_MOVE,
    UNIQUE_MOVE,
    GROUP_MOVE_TYPE_MAX UMETA(Hidden),
};

