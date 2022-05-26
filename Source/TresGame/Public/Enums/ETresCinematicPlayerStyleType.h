#pragma once
#include "CoreMinimal.h"
#include "ETresCinematicPlayerStyleType.generated.h"

UENUM(BlueprintType)
enum class ETresCinematicPlayerStyleType : uint8 {
    NONE,
    WEAR_L0_WEAPON_L1,
    WEAR_L1_WEAPON_L0,
    WEAR_L1_WEAPON_L1,
    WEAR_L2_WEAPON_L0,
    WEAR_L2_WEAPON_L1,
    _MAX UMETA(Hidden),
};

