#pragma once
#include "CoreMinimal.h"
#include "ETresDamageLeaveOneType.generated.h"

UENUM(BlueprintType)
enum class ETresDamageLeaveOneType : uint8 {
    NORMAL,
    ANYONE,
    PLAYER_ONLY,
    PLAYERTEAM_ONLY,
    ENEMY_ONLY,
    _MAX UMETA(Hidden),
};

