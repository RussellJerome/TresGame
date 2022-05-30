#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleScoreEvalutionInOneTurnJudgementMethod.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleScoreEvalutionInOneTurnJudgementMethod : uint8 {
    ComboDependency,
    ScoreDependency,
};

