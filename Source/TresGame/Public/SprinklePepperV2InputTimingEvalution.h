#pragma once
#include "CoreMinimal.h"
#include "SprinklePepperV2InputTimingEvalution.generated.h"

UENUM(BlueprintType)
enum class SprinklePepperV2InputTimingEvalution : uint8 {
    InputTimingEvalutionNone,
    InputTimingEvalutionTooFast,
    InputTimingEvalutionSuccess,
    InputTimingEvalutionGreatSuccess,
    InputTimingEvalutionTooSlow,
};

