#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerJumpModes.generated.h"

UENUM(BlueprintType)
enum ETresPlayerJumpModes {
    TPJ_NORMAL,
    TPJ_HIGH,
    TPJ_SUPER,
    TPJ_DOUBLE_FLIGHT,
    TPJ_SUPER_FLIGHT,
    TPJ_MAX UMETA(Hidden),
};

