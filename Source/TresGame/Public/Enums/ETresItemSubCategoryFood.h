#pragma once
#include "CoreMinimal.h"
#include "ETresItemSubCategoryFood.generated.h"

UENUM(BlueprintType)
enum class ETresItemSubCategoryFood : uint8 {
    SOUP,
    APPETIZER,
    FISHDISH,
    MEETDISH,
    DESSERT,
    _MAX UMETA(Hidden),
};

