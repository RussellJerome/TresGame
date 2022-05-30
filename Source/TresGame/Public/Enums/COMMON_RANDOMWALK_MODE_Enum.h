#pragma once
#include "CoreMinimal.h"
#include "COMMON_RANDOMWALK_MODE_Enum.generated.h"

UENUM(BlueprintType)
enum class COMMON_RANDOMWALK_MODE_Enum : uint8 {
    Forward,
    Backward,
    ToTarget,
    COMMON_RANDOMWALK_MODE_MAX UMETA(Hidden),
};

