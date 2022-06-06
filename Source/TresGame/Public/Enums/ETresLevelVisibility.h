#pragma once
#include "CoreMinimal.h"
#include "ETresLevelVisibility.generated.h"

UENUM(BlueprintType)
enum class ETresLevelVisibility : uint8 {
    Default,
    Hidden,
    Hidden_Tick,
    None,
};

