#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleRuleGameClearCondition.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleRuleGameClearCondition : uint8 {
    None,
    EarnUnitsNum,
    Decrease,
    TimeLimit,
    EarnHoneypotsNum,
};

