#pragma once
#include "CoreMinimal.h"
#include "ETresCharInputType.generated.h"

UENUM(BlueprintType)
enum ETresCharInputType {
    TRES_CHAR_INPUT_AI,
    TRES_CHAR_INPUT_PAD,
    TRES_CHAR_INPUT_DEBUG_PAD,
    TRES_CHAR_INPUT_DONOTING,
    TRES_CHAR_INPUT_OTHER,
    TRES_CHAR_INPUT_MAX UMETA(Hidden),
};

