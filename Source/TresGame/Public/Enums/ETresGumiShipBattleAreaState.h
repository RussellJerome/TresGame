#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipBattleAreaState.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipBattleAreaState : uint8 {
    ACTIVE,
    LEAVE_GUMI_SHIP,
    ENEMY_DISAPPEAR,
    NON_ACTIVE,
};

