#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipBattleMissionEndFactorType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipBattleMissionEndFactorType : uint8 {
    BMEF_NONE,
    BMEF_RETRY,
    BMEF_QUIT,
    BMEF_SEARCH_RESTART,
    BMEF_NORMAL,
    BMEF_MAX UMETA(Hidden),
};

