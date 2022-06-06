#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickSimpleMovementAcclType.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickSimpleMovementAcclType : uint8 {
    Linear,
    Accelerator,
    Curve,
};

