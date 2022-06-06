#pragma once
#include "CoreMinimal.h"
#include "SEQUENTIAL_EXEC_GET_TARGET_ACTOR.generated.h"

UENUM(BlueprintType)
enum class SEQUENTIAL_EXEC_GET_TARGET_ACTOR : uint8 {
    Blackboard,
    EQS_DefaultTargetSelection,
    SEQUENTIAL_EXEC_GET_TARGET_MAX UMETA(Hidden),
};

