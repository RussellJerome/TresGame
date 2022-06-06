#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEEX773_ACTION_1WARP_KIND.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEEX773_ACTION_1WARP_KIND : uint8 {
    WARP_KIND_COMMON,
    WARP_KIND_ESCAPE,
    WARP_KIND_HVN_PHASE3_FIRST,
    WARP_KIND_FTRND_END,
    WARP_KIND_MAX UMETA(Hidden),
};

