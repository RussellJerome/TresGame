#pragma once
#include "CoreMinimal.h"
#include "RemyDishCategory.generated.h"

UENUM(BlueprintType)
enum class RemyDishCategory : uint8 {
    Appetizer,
    Soup,
    Fish,
    Meat,
    Dessert,
    RemyDishCategoryNum,
};

