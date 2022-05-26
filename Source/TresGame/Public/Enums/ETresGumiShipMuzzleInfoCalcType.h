#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipMuzzleInfoCalcType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipMuzzleInfoCalcType : uint8 {
    MICT_RROT_RLOC,
    MICT_RLOC_RROT,
    MICT_MAX UMETA(Hidden),
};

