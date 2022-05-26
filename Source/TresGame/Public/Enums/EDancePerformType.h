#pragma once
#include "CoreMinimal.h"
#include "EDancePerformType.generated.h"

UENUM(BlueprintType)
enum class EDancePerformType : uint8 {
    NONE,
    SPIN_PERFORM,
    STEP_PERFORM,
    PAIR_IN,
    PAIR_LOOP,
    PAIR_OUT,
    PAIR_OUTIN_OUT,
    PAIR_OUTIN_IN,
    PAIR_CHANGE,
    PAIR_CHANGE_FAILED,
    SPECIAL_MOVE_SUCCESS,
    SITUATION_COMMAND,
    RAPUNZEL_FINISH,
    CLAP_ACTION,
};

