#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleUnitScoreSizeJudgementMethod.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleUnitScoreSizeJudgementMethod : uint8 {
    UnitNumDependency,
    ScoreDependency,
};

