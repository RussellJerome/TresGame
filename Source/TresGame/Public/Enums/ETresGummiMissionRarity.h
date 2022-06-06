#pragma once
#include "CoreMinimal.h"
#include "ETresGummiMissionRarity.generated.h"

UENUM(BlueprintType)
enum class ETresGummiMissionRarity : uint8 {
    RARITY_NON,
    RARITY_LOW,
    RARITY_MIDDLE,
    RARITY_HIGH,
    RARITY_MAX UMETA(Hidden),
};

