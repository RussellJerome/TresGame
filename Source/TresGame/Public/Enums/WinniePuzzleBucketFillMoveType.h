#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleBucketFillMoveType.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleBucketFillMoveType : uint8 {
    InOrder,
    Random,
};

