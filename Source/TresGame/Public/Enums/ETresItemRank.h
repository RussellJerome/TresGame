#pragma once
#include "CoreMinimal.h"
#include "ETresItemRank.generated.h"

UENUM(BlueprintType)
enum class ETresItemRank : uint8 {
    NOTHING,
    RANK00,
    RANK01,
    RANK02,
    RANK03,
    _MAX UMETA(Hidden),
};

