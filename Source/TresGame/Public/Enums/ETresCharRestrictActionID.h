#pragma once
#include "CoreMinimal.h"
#include "ETresCharRestrictActionID.generated.h"

UENUM(BlueprintType)
enum class ETresCharRestrictActionID : uint8 {
    ATTACK,
    MAGIC,
    ITEM,
    LINK,
    FRIENDLINK,
    ATTRACTIONFLOW,
    STYLE,
    SITUATION,
    GUARD,
    JUMP,
    SHOOTLOCK,
    RUN,
    DIVEFALL,
    DEEPDIVING,
    CANCELSITUATION,
    ALWAYS_USESPAWNPOINT,
    PHOTO_MODE,
    _MAX UMETA(Hidden),
};

