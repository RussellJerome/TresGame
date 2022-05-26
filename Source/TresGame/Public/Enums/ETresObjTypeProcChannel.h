#pragma once
#include "CoreMinimal.h"
#include "ETresObjTypeProcChannel.generated.h"

UENUM(BlueprintType)
enum class ETresObjTypeProcChannel : uint8 {
    CH_COMMON,
    CH_PLAYER,
    CH_EVENT,
    CH_MENU,
    CH_ENEMY,
    CH_ENEMYBOSS,
    _CH_RESERVE06,
    _CH_RESERVE07,
    CH_SYSTEM1,
    _CH_RESERVE09,
    _CH_RESERVE10,
    _CH_RESERVE11,
    CH_DEBUG1,
    CH_DEBUG2,
    CH_DEBUG3,
    CH_PROFILING,
    CH_MAX UMETA(Hidden),
};

