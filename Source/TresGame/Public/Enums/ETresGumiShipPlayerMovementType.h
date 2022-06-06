#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipPlayerMovementType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipPlayerMovementType : uint8 {
    MT_NONE_TYPE,
    MT_DEFAULT_TYPE,
    MT_EXPERT_TYPE,
    MT_TRACKING_TYPE,
    MT_RAIL_SLIDE_TYPE,
    MT_RAIL_SLIDE_TYPE_TRACKING_LIKE,
    MT_DEBUG_TYPE,
    MOVE_TYPE_MAX UMETA(Hidden),
};

