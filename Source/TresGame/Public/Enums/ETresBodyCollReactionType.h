#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollReactionType.generated.h"

UENUM(BlueprintType)
enum class ETresBodyCollReactionType : uint8 {
    TRES_BODY_RT_DEFAULT,
    TRES_BODY_RT_NO_REACTION,
    STRONG,
    TRES_BODY_RT_GUARD,
    WEAK_GUARD,
    GUARD_NOREACT,
    TRES_BODY_RT_INVINCIBLE,
    INVINCIBLE_NOREACT,
    TRES_BODY_RT_GHOST,
    GHOST_NOREACT,
    REFLECT1,
    GHOST_INVINCIBLE,
    _TRES_BODY_RT_MAX UMETA(Hidden),
};

