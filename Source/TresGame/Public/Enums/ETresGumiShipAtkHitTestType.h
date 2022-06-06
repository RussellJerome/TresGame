#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipAtkHitTestType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipAtkHitTestType : uint8 {
    HT_NONE,
    HT_ENEMY_ONLY,
    HT_PLAYER_ONLY,
    HT_ALL,
    HT_MAX UMETA(Hidden),
};

