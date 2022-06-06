#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipRaderEntityType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipRaderEntityType : uint8 {
    ICON_TYPE_MARKER,
    ICON_TYPE_WORLD,
    ICON_TYPE_ARENA,
    ICON_TYPE_TRAVEL,
    ICON_TYPE_TREASUER,
    ICON_TYPE_CRYSTAL,
    ICON_TYPE_PRIZEBOX,
    ICON_TYPE_NONE,
    ICON_TYPE_MAX UMETA(Hidden),
};

