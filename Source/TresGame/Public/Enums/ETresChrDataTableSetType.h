#pragma once
#include "CoreMinimal.h"
#include "ETresChrDataTableSetType.generated.h"

UENUM(BlueprintType)
enum class ETresChrDataTableSetType : uint8 {
    CDTS_TYPE_PLAYER,
    CDTS_TYPE_ENEMY,
    CDTS_TYPE_GIMMICK,
    PLAYER_GIGAS,
    PLAYER_SHIP,
    ENEMY_SHIP,
    CDTS_TYPE_MAX UMETA(Hidden),
};

