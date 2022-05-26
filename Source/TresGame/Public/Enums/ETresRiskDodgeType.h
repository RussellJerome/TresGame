#pragma once
#include "CoreMinimal.h"
#include "ETresRiskDodgeType.generated.h"

UENUM(BlueprintType)
enum ETresRiskDodgeType {
    TRDT_NONE,
    TRDT_UNDERSLIDE,
    TRDT_OVERSLIDE,
    TRDT_SLIDETURN,
    TRDT_WARP,
    TRDT_MAX UMETA(Hidden),
};

