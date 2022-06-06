#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipBonusKind.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipBonusKind : uint8 {
    BK_DEFEAD_COUNT,
    BK_QUICK_TEAM_DEFEAD,
    BK_AREA_DEFEAD,
    BK_MAX UMETA(Hidden),
};

