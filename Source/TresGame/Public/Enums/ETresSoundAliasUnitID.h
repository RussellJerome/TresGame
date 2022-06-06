#pragma once
#include "CoreMinimal.h"
#include "ETresSoundAliasUnitID.generated.h"

UENUM(BlueprintType)
enum class ETresSoundAliasUnitID : uint8 {
    SEAU_NOTHING,
    SEAU_RH_WEAPON,
    SEAU_LH_WEAPON,
    SEAU_RL_WEAPON,
    SEAU_LL_WEAPON,
    _SEAU_MAX UMETA(Hidden),
};

