#pragma once
#include "CoreMinimal.h"
#include "COMMON_SHADOWMOVE_MODE_Enum.generated.h"

UENUM(BlueprintType)
enum class COMMON_SHADOWMOVE_MODE_Enum : uint8 {
    Approach,
    ApproachEnd,
    Surround,
    LinkSurround,
    COMMON_SHADOWMOVE_MODE_MAX UMETA(Hidden),
};

