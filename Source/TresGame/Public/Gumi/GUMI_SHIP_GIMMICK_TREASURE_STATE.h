#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_GIMMICK_TREASURE_STATE.generated.h"

UENUM(BlueprintType)
enum class GUMI_SHIP_GIMMICK_TREASURE_STATE : uint8 {
    _TREASURE_SUCCESS_,
    _TREASURE_FAILURE_,
    _TREASURE_NOW_,
    _TREASURE_MAX UMETA(Hidden),
};

