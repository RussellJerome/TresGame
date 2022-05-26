#pragma once
#include "CoreMinimal.h"
#include "ETresCharEquipPart.generated.h"

UENUM(BlueprintType)
enum class ETresCharEquipPart : uint8 {
    UNKNOWN,
    RIGHT_HAND,
    LEFT_HAND,
    BOTH_HAND,
    RIGHT_LEG,
    LEFT_LEG,
    BOTH_LEG,
    ALL,
    _MAX UMETA(Hidden),
};

