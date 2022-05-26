#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleVagetableSlopeDirection.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleVagetableSlopeDirection : uint8 {
    SlopeNorth,
    SlopeSouth,
    SlopeWest,
    SlopeEast,
};

