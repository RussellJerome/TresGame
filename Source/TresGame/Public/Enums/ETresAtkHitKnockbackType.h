#pragma once
#include "CoreMinimal.h"
#include "ETresAtkHitKnockbackType.generated.h"

UENUM(BlueprintType)
enum class ETresAtkHitKnockbackType : uint8 {
    TRES_AHKBT_NORMAL,
    TRES_AHKBT_VELOCITY,
    TRES_AHKBT_ATK_COLLISION,
    TRES_AHKBT_INSTIGATOR_PAWN,
    TRES_AHKBT_IMPACT_LOCATION,
    SPECIFIC,
    _TRES_AHKBT_MAX UMETA(Hidden),
};

