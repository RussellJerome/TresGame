#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipHudMode.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipHudMode : uint8 {
    HUD_MODE_QUEST,
    HUD_MODE_BATTLE,
    HUD_MODE_MAX UMETA(Hidden),
};

