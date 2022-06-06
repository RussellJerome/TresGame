#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefBattleItem.generated.h"

UENUM(BlueprintType)
enum class ETresItemDefBattleItem : uint8 {
    NOTHING,
    BI_POTION,
    BI_HIGHPOTION,
    BI_MEGAPOTION,
    BI_ETHER,
    BI_MEGAETHER,
    BI_ELIXIR,
    BI_LASTELIXIR,
    BI_FOCUSSUPPLY,
    BI_HIGHFOCUSSUPPLY,
    BI_ALLCURE,
    BI_HIGHETHER,
    _MAX = 0x10,
};

