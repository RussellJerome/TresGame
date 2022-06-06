#pragma once
#include "CoreMinimal.h"
#include "ETresSplineAnchorInterpType.generated.h"

UENUM(BlueprintType)
enum class ETresSplineAnchorInterpType : uint8 {
    TSAIT_SPLINE,
    TSAIT_LINEAR,
    _TSAIT_MAX UMETA(Hidden),
};

