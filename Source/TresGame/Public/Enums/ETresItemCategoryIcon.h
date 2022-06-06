#pragma once
#include "CoreMinimal.h"
#include "ETresItemCategoryIcon.generated.h"

UENUM(BlueprintType)
enum class ETresItemCategoryIcon : uint8 {
    NONE,
    WEAPON,
    WEAPON_D,
    WEAPON_G,
    WEAPON_F,
    BATTLEITEM,
    CAMPITEM,
    PROTECTOR,
    ACCESSORY,
    FOODSTUFF,
    KEYITEM,
    MATERIAL,
    MOGNET,
    FOOD,
    GUMI_BASE,
    GUMI_DECO,
    GUMI_MATERIAL,
    GUMI_PATTERN,
    GUMI_STICKER,
    GUMI_SHIP_BP,
    GUMI_SHIP_BP_PIECE,
    GUMI_WEAPON_SP,
    GUMI_TREASURE_MAP,
    MAX,
};

