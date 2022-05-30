#pragma once
#include "CoreMinimal.h"
#include "COMMON_SURROUNDTARGET_MODE_Enum.generated.h"

UENUM(BlueprintType)
enum class COMMON_SURROUNDTARGET_MODE_Enum : uint8 {
    Right,
    Left,
    UnsteadyTwoway,
    COMMON_SURROUNDTARGET_MODE_MAX UMETA(Hidden),
};

