#pragma once
#include "CoreMinimal.h"
#include "EDanceDebugInfoType.generated.h"

UENUM(BlueprintType)
enum class EDanceDebugInfoType : uint8 {
    DEBUG_INFO_MOVE,
    DEBUG_INFO_SPLINE,
    DEBUG_INFO_TARGET,
    DEBUG_INFO_CLAPSPOT,
    DEBUG_INFO_BGM,
    DEBUG_INFO_MAX UMETA(Hidden),
};

