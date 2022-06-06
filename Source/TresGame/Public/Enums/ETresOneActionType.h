#pragma once
#include "CoreMinimal.h"
#include "ETresOneActionType.generated.h"

UENUM(BlueprintType)
enum class ETresOneActionType : uint8 {
    DEFAULT,
    SPECIAL_PERFORM,
    IMPRESSION_BIRD,
    MAX,
};

