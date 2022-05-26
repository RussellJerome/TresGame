#pragma once
#include "CoreMinimal.h"
#include "ETresWeaponGrowLvl.generated.h"

UENUM(BlueprintType)
enum class ETresWeaponGrowLvl : uint8 {
    TRES_WEAPON_GROW_LVL01,
    TRES_WEAPON_GROW_LVL02,
    TRES_WEAPON_GROW_LVL03,
    TRES_WEAPON_GROW_MAX UMETA(Hidden),
};

