#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleStopElapsedTimeTiming.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleStopElapsedTimeTiming : uint8 {
    WhenShoot,
    PlayerUnitsMoved,
};

