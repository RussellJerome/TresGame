#pragma once
#include "CoreMinimal.h"
#include "GUMISHIP_ENEMY622_STATUS.generated.h"

UENUM(BlueprintType)
enum class GUMISHIP_ENEMY622_STATUS : uint8 {
    E_GM622_SHIELD_MODE,
    E_GM622_INVINCIBLE_MODE,
    E_GM622_CORE_MODE,
    E_GM622_MAX UMETA(Hidden),
};

