#pragma once
#include "CoreMinimal.h"
#include "EHologramActorCategory.generated.h"

UENUM(BlueprintType)
enum class EHologramActorCategory : uint8 {
    SORA,
    SORA_KH2,
    LIGHT,
    DARK,
    FRIEND,
    ENEMY,
    OBJ_SPIRIT,
    OBJ_GUMIENEMY,
    OBJ_GUMIPARTS,
    OBJ_EFFECT,
    OBJ_OTHERS,
    PHOTOGRAPH_ASSIST,
    PHOTOGRAPH_ASSIST_LIGHT,
    EFF_CAMATTACH,
    EFF_FILTER,
    MAX,
};

