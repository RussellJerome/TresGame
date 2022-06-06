#pragma once
#include "CoreMinimal.h"
#include "ETresProjectileRespawnType.generated.h"

UENUM(BlueprintType)
enum class ETresProjectileRespawnType : uint8 {
    TPR_TYPE_HIT_ALWAYS,
    TPR_TYPE_HIT_ANY,
    TPR_TYPE_HIT_PAWN,
    TPR_TYPE_HIT_MAP,
    TPR_TYPE_NO_HIT,
    TPR_TYPE_MAX UMETA(Hidden),
};

