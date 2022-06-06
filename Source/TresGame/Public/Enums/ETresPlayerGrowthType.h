#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerGrowthType.generated.h"

UENUM(BlueprintType)
enum class ETresPlayerGrowthType : uint8 {
    POWER,
    MAGIC,
    DEFENSE,
    _MAX UMETA(Hidden),
};

