#pragma once
#include "CoreMinimal.h"
#include "ETresBPEM_SystemEventType.generated.h"

UENUM(BlueprintType)
enum class ETresBPEM_SystemEventType : uint8 {
    UNKNOWN,
    TICK_ENABLED,
    TICK_DISABLED,
    SUSPEND_START,
    SUSPEND_END,
    ETresBPEM_MAX UMETA(Hidden),
};

