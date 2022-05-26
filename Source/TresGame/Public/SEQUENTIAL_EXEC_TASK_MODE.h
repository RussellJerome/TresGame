#pragma once
#include "CoreMinimal.h"
#include "SEQUENTIAL_EXEC_TASK_MODE.generated.h"

UENUM(BlueprintType)
enum class SEQUENTIAL_EXEC_TASK_MODE : uint8 {
    None,
    MoveTo,
    MoveToWaitAnimEnd,
    TurnTo,
    SetTempDestination_Querier,
    SetTempDirection_Querier,
    TerminateTask,
    SkipSequence,
    SEQUENTIAL_EXEC_TASK_MAX UMETA(Hidden),
};

