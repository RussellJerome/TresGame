#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntityRestartSequence.generated.h"

UENUM(BlueprintType)
enum class ETresLevelEntityRestartSequence : uint8 {
    RESTART_ENTER_SEQUENCE,
    RESTART_EXIT_SEQUENCE,
    RESTART_BOTH_SEQUENCE,
    RESTART_MAX UMETA(Hidden),
};

