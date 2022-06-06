#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleState.generated.h"

UENUM(BlueprintType)
enum WinniePuzzleState {
    PuzzlePrepare,
    PuzzleHelp,
    PuzzleUnitAppear,
    PuzzleCountdown,
    PuzzleStartWait,
    PuzzleWait,
    PuzzleShootWait,
    PuzzlePlayerUnitMoving,
    PuzzleUnitRemoving,
    PuzzleNoRemovableUnits,
    PuzzleSlopeAction,
    PuzzleSameKindUnitsRemoving,
    PuzzleTurnEndProcess,
    PuzzleAutoGrow,
    PuzzleFillUnits,
    PuzzleBound,
    PuzzleIncrease,
    PuzzleDecrease,
    PuzzleBomb,
    PuzzleResult,
    PuzzleNone = 0xFF,
};

