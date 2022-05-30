#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleManagerState.generated.h"

UENUM(BlueprintType)
enum WinniePuzzleManagerState {
    PuzzleManagerMain,
    PuzzleManagerRetry,
    PuzzleManagerFinalize,
};

