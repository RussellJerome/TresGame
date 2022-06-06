#pragma once
#include "CoreMinimal.h"
#include "ETresComNpcMoveType.generated.h"

UENUM(BlueprintType)
enum class ETresComNpcMoveType : uint8 {
    CNPC_MOVE_NONE,
    CNPC_MOVE_CONTROLLER,
    CNPC_MOVE_MAX UMETA(Hidden),
};

