#pragma once
#include "CoreMinimal.h"
#include "ETresDamageCalcType.generated.h"

UENUM(BlueprintType)
enum class ETresDamageCalcType : uint8 {
    NORMAL,
    RATE_MAXHP,
    RATE_HP,
    NO_OXYGEN,
    _MAX UMETA(Hidden),
};

