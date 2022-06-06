#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipSplineEventType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipSplineEventType : uint8 {
    ENEMY_MOVE_SPEED_UP_POINT,
    ENEMY_MOVE_SPEED_DOWN_POINT,
    ENEMY_ATTACK_CHECK_START_POINT,
    ENEMY_SPECIAL_EVENT_TRIGGER_POINT,
    ARRIVED_SPLINE_END_POINT,
    SPLINE_ADDITIONAL_DATA_KIND_MAX UMETA(Hidden),
};

