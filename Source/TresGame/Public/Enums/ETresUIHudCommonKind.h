#pragma once
#include "CoreMinimal.h"
#include "ETresUIHudCommonKind.generated.h"

UENUM(BlueprintType)
enum class ETresUIHudCommonKind : uint8 {
    None,
    Score,
    Score_Chain,
    Score5,
    Score5_Chain,
    Score6,
    Score6_Chain,
    Height,
    HitCount,
    MAX,
};

