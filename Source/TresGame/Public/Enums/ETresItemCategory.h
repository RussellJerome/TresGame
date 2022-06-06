#pragma once
#include "CoreMinimal.h"
#include "ETresItemCategory.generated.h"

UENUM(BlueprintType)
enum class ETresItemCategory : uint8 {
    CAT_NONE,
    BATTLEITEM,
    CAMPITEM,
    WEAPON,
    PROTECTOR,
    ACCESSORY,
    FOOD,
    MATERIAL,
    FOODSTUFF,
    KEYITEM,
    MOGNET,
    LSIGAME,
    NAVIMAP,
    REPORT,
    GUMI_PARTS,
    GUMI_MATERIAL,
    GUMI_PATTERN,
    GUMI_STICKER,
    GUMI_SHIP_BP,
    GUMI_ETC,
    _CAT_MAX UMETA(Hidden),
};

