#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleUnitAnimationType.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleUnitAnimationType : uint8 {
    Idle,
    Roll,
    RollEnd,
    Grow,
    GrowWait,
};

