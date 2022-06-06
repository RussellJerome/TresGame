#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_DROPITEM_RARITY.generated.h"

UENUM(BlueprintType)
enum class GUMI_SHIP_DROPITEM_RARITY : uint8 {
    RARITY_LOW,
    RARITY_CENTER,
    RARITY_HIGH,
    RARITY_MAX UMETA(Hidden),
};

