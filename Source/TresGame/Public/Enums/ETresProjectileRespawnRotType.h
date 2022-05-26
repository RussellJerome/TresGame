#pragma once
#include "CoreMinimal.h"
#include "ETresProjectileRespawnRotType.generated.h"

UENUM(BlueprintType)
enum class ETresProjectileRespawnRotType : uint8 {
    TPRR_NORMAL,
    TPRR_YAW_ONLY,
    TPRR_CLEAR,
    TPRR_MAX UMETA(Hidden),
};

