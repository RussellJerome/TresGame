#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleSlopeActionRemoveFindingTarget.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleSlopeActionRemoveFindingTarget : uint8 {
    DontRemove,
    SlopeDirection,
    Around,
    All,
};

