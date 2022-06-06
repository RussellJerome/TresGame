#pragma once
#include "CoreMinimal.h"
#include "EDanceClapMissionType.generated.h"

UENUM(BlueprintType)
enum class EDanceClapMissionType : uint8 {
    PATTERN_1,
    PATTERN_2,
    PATTERN_3,
    PATTERN_MAX UMETA(Hidden),
};

