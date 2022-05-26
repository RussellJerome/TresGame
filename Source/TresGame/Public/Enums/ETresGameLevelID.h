#pragma once
#include "CoreMinimal.h"
#include "ETresGameLevelID.generated.h"

UENUM(BlueprintType)
enum ETresGameLevelID {
    TRES_GAME_LVID_BEGINNER,
    TRES_GAME_LVID_STANDARD,
    TRES_GAME_LVID_PROUD,
    TRES_GAME_LVID_CRITICAL,
    TRES_GAME_LVID_MAX UMETA(Hidden),
};

