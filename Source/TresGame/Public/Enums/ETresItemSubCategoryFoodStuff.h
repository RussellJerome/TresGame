#pragma once
#include "CoreMinimal.h"
#include "ETresItemSubCategoryFoodStuff.generated.h"

UENUM(BlueprintType)
enum class ETresItemSubCategoryFoodStuff : uint8 {
    SEAFOOD,
    VEGETABLE,
    MUSHROOM,
    HERB,
    FRUIT,
    SEVENPUDDING,
    MEAT,
    _MAX UMETA(Hidden),
};

