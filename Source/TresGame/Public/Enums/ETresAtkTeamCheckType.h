#pragma once
#include "CoreMinimal.h"
#include "ETresAtkTeamCheckType.generated.h"

UENUM(BlueprintType)
enum class ETresAtkTeamCheckType : uint8 {
    NORMAL,
    NO_CHECK,
    SAME_ZERO,
    _MAX UMETA(Hidden),
};

