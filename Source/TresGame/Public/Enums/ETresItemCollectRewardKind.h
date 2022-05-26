#pragma once
#include "CoreMinimal.h"
#include "ETresItemCollectRewardKind.generated.h"

UENUM(BlueprintType)
enum class ETresItemCollectRewardKind : uint8 {
    TICR_GET_ITEM,
    TICR_ENABLE_SYNTHESIS,
    TICR_ENABLE_BUY,
    TICR_MAX UMETA(Hidden),
};

