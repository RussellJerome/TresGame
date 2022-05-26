#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleTotalScoreEvalution.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleTotalScoreEvalution : uint8 {
    None,
    LowerGood,
    Good,
    Cool,
    Fantastic,
};

