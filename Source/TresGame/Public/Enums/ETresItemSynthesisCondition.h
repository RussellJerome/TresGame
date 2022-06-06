#pragma once
#include "CoreMinimal.h"
#include "ETresItemSynthesisCondition.generated.h"

UENUM(BlueprintType)
enum class ETresItemSynthesisCondition : uint8 {
    TISC_NONE,
    TISC_COLLECT_LIST,
    TISC_MOTIF_LIST,
    TISC_MAX UMETA(Hidden),
};

