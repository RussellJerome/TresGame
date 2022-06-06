#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_GIMMICK_PLAYER_MODE.generated.h"

UENUM(BlueprintType)
enum class GUMI_SHIP_GIMMICK_PLAYER_MODE : uint8 {
    _PLAYER_MODE_EVENT_,
    _PLAYER_MODE_NOMAL_,
    _PLAYER_MODE_MAX UMETA(Hidden),
};

