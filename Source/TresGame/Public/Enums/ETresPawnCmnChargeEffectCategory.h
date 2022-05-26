#pragma once
#include "CoreMinimal.h"
#include "ETresPawnCmnChargeEffectCategory.generated.h"

UENUM(BlueprintType)
enum class ETresPawnCmnChargeEffectCategory : uint8 {
    TRES_CMN_CEC_WEAPON,
    TRES_CMN_CEC_STYLECHANGE,
    TRES_CMN_CEC_MAX UMETA(Hidden),
};

