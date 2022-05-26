#pragma once
#include "CoreMinimal.h"
#include "ETresItemSubCategoryKeyItem.generated.h"

UENUM(BlueprintType)
enum class ETresItemSubCategoryKeyItem : uint8 {
    NONE,
    EVENT,
    SYNTHESIS_RECIPE,
    _MAX UMETA(Hidden),
};

