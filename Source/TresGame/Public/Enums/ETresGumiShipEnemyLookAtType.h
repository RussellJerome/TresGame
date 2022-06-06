#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyLookAtType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipEnemyLookAtType : uint8 {
    KEEP_SPLINE_MOVE_DIRECTION,
    TURN_TO_GUMI_SHIP_PLAYER,
    TURN_TO_CAMERA_OFFSET_LOCATION,
    DIRECTION_TYPE_MAX UMETA(Hidden),
};

