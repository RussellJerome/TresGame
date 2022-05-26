#pragma once
#include "CoreMinimal.h"
#include "ETresItemCollectCondition.generated.h"

UENUM(BlueprintType)
enum class ETresItemCollectCondition : uint8 {
    TICC_MAT_KIND_NUM,
    TICC_MAT_TOTAL_NUM,
    TICC_MAT_KIND_ALL,
    TICC_MAT_SPKIND_NUM,
    TICC_MAT_GET_RANK,
    TICC_MAT_MAX UMETA(Hidden),
};

