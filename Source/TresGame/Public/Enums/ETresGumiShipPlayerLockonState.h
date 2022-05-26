#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipPlayerLockonState.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipPlayerLockonState : uint8 {
    LOS_NONE_TYPE,
    LOS_AUTO_LOCKON_TYPE,
    LOS_MANUAL_LOCKON_TYPE,
    LOS_TYPE_MAX UMETA(Hidden),
    LOS_MAX UMETA(Hidden),
};

