#pragma once
#include "CoreMinimal.h"
#include "EQS_PARAM_VALUE_Enum.generated.h"

UENUM(BlueprintType)
enum class EQS_PARAM_VALUE_Enum : uint8 {
    Literal,
    DistanceTargetToQuerier,
    DistanceTargetToQuerierPlusMargin,
    EQS_PARAM_VALUE_MAX UMETA(Hidden),
};

