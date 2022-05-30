#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_ENEMY_GM626_SHIELD.generated.h"

UENUM(BlueprintType)
enum class GUMI_SHIP_ENEMY_GM626_SHIELD : uint8 {
    _SHIELD_NON_,
    _SHIELD_UPPER_,
    _SHIELD_LOWER_,
    _SHIELD_ZOMBIE_,
    _SHIELD_MAX UMETA(Hidden),
};

