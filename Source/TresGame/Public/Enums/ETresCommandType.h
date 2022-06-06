#pragma once
#include "CoreMinimal.h"
#include "ETresCommandType.generated.h"

UENUM(BlueprintType)
enum ETresCommandType {
    TRES_CMD_TYPE_NONE,
    TRES_CMD_TYPE_ACTION,
    TRES_CMD_TYPE_FREEFLOW,
    TRES_CMD_TYPE_COMMAND,
    TRES_CMD_TYPE_REACTION,
    TRES_CMD_TYPE_SHOOTFLOW,
    TRES_CMD_TYPE_ABILITY,
    TRES_CMD_TYPE_PRIZE,
    TRES_CMD_TYPE_OTHER,
    TRES_CMD_TYPE_END,
    TRES_CMD_TYPE_MAX UMETA(Hidden),
};

