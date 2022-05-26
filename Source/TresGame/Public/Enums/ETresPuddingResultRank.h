#pragma once
#include "CoreMinimal.h"
#include "ETresPuddingResultRank.generated.h"

UENUM(BlueprintType)
enum class ETresPuddingResultRank : uint8 {
    RANK_A,
    RANK_B,
    RANK_C,
    RANK_MAX UMETA(Hidden),
};

