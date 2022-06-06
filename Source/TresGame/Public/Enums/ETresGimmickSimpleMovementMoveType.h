#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickSimpleMovementMoveType.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickSimpleMovementMoveType : uint8 {
    Straight,
    Homing,
    TargetDir,
    TargetPoint,
    Parabola,
};

