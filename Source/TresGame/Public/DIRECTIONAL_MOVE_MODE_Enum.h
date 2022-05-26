#pragma once
#include "CoreMinimal.h"
#include "DIRECTIONAL_MOVE_MODE_Enum.generated.h"

UENUM(BlueprintType)
enum class DIRECTIONAL_MOVE_MODE_Enum : uint8 {
    Forward,
    Backward,
    Left,
    Right,
    DIRECTIONAL_MOVE_MODE_MAX UMETA(Hidden),
};

