#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipRailSlideSpeedAdjustmentType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipRailSlideSpeedAdjustmentType : uint8 {
    RSSA_NONE,
    RSSA_ENEMY,
    RSSA_PLAYER,
    RSSA_MAX UMETA(Hidden),
};

