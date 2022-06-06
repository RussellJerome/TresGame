#pragma once
#include "CoreMinimal.h"
#include "ETresDamageAttribute.generated.h"

UENUM(BlueprintType)
enum class ETresDamageAttribute : uint8 {
    TRES_DMG_ATTR_PHYSICAL,
    TRES_DMG_ATTR_FIRE,
    TRES_DMG_ATTR_BLIZZARD,
    TRES_DMG_ATTR_THUNDER,
    TRES_DMG_ATTR_WATER,
    TRES_DMG_ATTR_AERO,
    TRES_DMG_ATTR_DARK,
    TRES_DMG_ATTR_NOTYPE,
    TRES_DMG_ATTR_MAX UMETA(Hidden),
};

