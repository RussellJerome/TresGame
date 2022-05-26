#pragma once
#include "CoreMinimal.h"
#include "ETresItemPathDirectionMode.generated.h"

UENUM(BlueprintType)
namespace ETresItemPathDirectionMode {
    enum Type {
        ItemRotation,
        ContextToItem,
        ItemToContext,
        ItemToPathStart,
        PathStartToItem,
        ItemToPathRelativeDirection,
        PathToItemRelativeDirection,
        PathRotationAtStart,
        PathRotationAtClosestPointOnPath,
    };
}

