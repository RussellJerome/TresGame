#pragma once
#include "CoreMinimal.h"
#include "EHologramWorldInitParamValueType.generated.h"

UENUM(BlueprintType)
enum class EHologramWorldInitParamValueType : uint8 {
    Float,
    Vector,
    Color,
    Max,
};

