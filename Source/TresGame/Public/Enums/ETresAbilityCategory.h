#pragma once
#include "CoreMinimal.h"
#include "ETresAbilityCategory.generated.h"

UENUM(BlueprintType)
enum class ETresAbilityCategory : uint8 {
    ACTION,
    MOVE,
    SUPPORT,
    _MAX UMETA(Hidden),
};

