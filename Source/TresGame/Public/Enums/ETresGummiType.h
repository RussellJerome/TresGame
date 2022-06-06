#pragma once
#include "CoreMinimal.h"
#include "ETresGummiType.generated.h"

UENUM(BlueprintType)
enum class ETresGummiType : uint8 {
    TYPE_NULL,
    TYPE_EDGE,
    TYPE_CURVE,
    TYPE_PIPE,
    TYPE_AERO,
    TYPE_SHOOTING,
    TYPE_LASER,
    TYPE_STRIKE,
    TYPE_ENGINE,
    TYPE_WING,
    TYPE_WHEEL,
    TYPE_COCKPIT,
    TYPE_SHIELD,
    TYPE_OPTION,
    TYPE_CHARACTER,
    TYPE_MAX UMETA(Hidden),
};

