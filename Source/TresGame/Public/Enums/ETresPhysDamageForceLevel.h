#pragma once
#include "CoreMinimal.h"
#include "ETresPhysDamageForceLevel.generated.h"

UENUM(BlueprintType)
enum class ETresPhysDamageForceLevel : uint8 {
    TPDF_LV_1,
    TPDF_LV_2,
    TPDF_LV_3,
    TPDF_LV_4,
    _TPDF_LV_MAX UMETA(Hidden),
};

