#pragma once
#include "CoreMinimal.h"
#include "COMMON_ROUNDANDROUND_MODE_Enum.generated.h"

UENUM(BlueprintType)
enum class COMMON_ROUNDANDROUND_MODE_Enum : uint8 {
    Right,
    Unsteady,
    COMMON_ROUNDANDROUND_MODE_MAX UMETA(Hidden),
};

