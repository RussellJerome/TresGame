#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleResult.generated.h"

UENUM(BlueprintType)
enum WinniePuzzleResult {
    PuzzleResultSuccess,
    PuzzleResultFailure,
    PuzzleResultFinish,
    PuzzleResultNone = 0xFF,
};

