#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipMultiWeaponSetTargetType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipMultiWeaponSetTargetType : uint8 {
    MWSTT_NORMAL,
    MWSTT_MOST_NEAR_DIST,
    MWSTT_MOST_LOW_HP,
    MWSTT_MAX UMETA(Hidden),
};

