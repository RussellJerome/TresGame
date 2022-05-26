#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipLimitType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipLimitType : uint8 {
    LIMIT_ENDOFWORLD,
    LIMIT_NOENTRY,
    LIMIT_HP,
    LIMIT_ATTACK,
    LIMIT_POWER,
    LIMIT_SPEED,
    LIMIT_ROLL,
    LIMIT_TURN,
    LIMIT_NONE,
    LIMIT_MAX UMETA(Hidden),
};

