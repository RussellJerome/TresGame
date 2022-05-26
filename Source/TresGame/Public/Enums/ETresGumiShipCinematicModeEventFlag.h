#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipCinematicModeEventFlag.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipCinematicModeEventFlag : uint8 {
    NOTIFY_RUN_MATINEE = 0x1,
    BOSS_ENEMY_APPEAR_EVENT,
};

