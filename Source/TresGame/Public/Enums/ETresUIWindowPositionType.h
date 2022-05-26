#pragma once
#include "CoreMinimal.h"
#include "ETresUIWindowPositionType.generated.h"

UENUM(BlueprintType)
enum ETresUIWindowPositionType {
    WINDOW_POSITION_TYPE_NONE,
    WINDOW_POSITION_TYPE_RATE,
    WINDOW_POSITION_TYPE_FREE,
    WINDOW_POSITION_TYPE_MAX UMETA(Hidden),
};

