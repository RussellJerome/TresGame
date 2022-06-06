#pragma once
#include "CoreMinimal.h"
#include "ETresThornChainState.generated.h"

UENUM(BlueprintType)
enum class ETresThornChainState : uint8 {
    APPEAR,
    NORMAL,
    AIMING,
    CAPTURED,
    AIMING_INTERVAL,
    DRAG,
    SWING,
    DEAD,
};

