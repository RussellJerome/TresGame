#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_ENEMY_GM626_STATUS.generated.h"

UENUM(BlueprintType)
enum class GUMI_SHIP_ENEMY_GM626_STATUS : uint8 {
    _UPPER_MODE_,
    _LOWER_MODE_,
    _UPPER_MODE2_,
    _CENTER_MODE_,
    _INVINCIBLE_,
    _MAX UMETA(Hidden),
};

