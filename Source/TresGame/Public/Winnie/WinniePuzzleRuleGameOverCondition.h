#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleRuleGameOverCondition.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleRuleGameOverCondition : uint8 {
    None,
    Increase,
    TimeLimit,
};

