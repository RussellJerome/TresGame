#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipWeaponPrimType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipWeaponPrimType : uint8 {
    SEQUENCE,
    NORMAL_WEAPON,
    SPECIAL_WEAPON,
    AUTO_MULTI_LOCKON_WEAPON,
    MANUAL_MULTI_LOCKON_WEAPON,
    NONE,
    TYPE_MAX UMETA(Hidden),
};

