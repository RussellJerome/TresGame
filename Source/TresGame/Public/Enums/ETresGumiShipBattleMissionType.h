#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipBattleMissionType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipBattleMissionType : uint8 {
    BMT_DEFEAT_TARGET,
    BMT_SPRINE_END,
    BMT_TIME_ATTACK,
    BMT_DEFEAT_COUNT,
    BMT_MAX UMETA(Hidden),
};

