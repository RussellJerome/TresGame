#pragma once
#include "CoreMinimal.h"
#include "ETresContextPathDirectionMode.generated.h"

UENUM(BlueprintType)
namespace ETresContextPathDirectionMode {
    enum Type {
        ContextRotation,
        ContextToItem,
        ItemToContext,
        ContextToPathStart,
        PathStartToContext,
        ContextToPathRelativeDirection,
        PathToContextRelativeDirection,
        PathRotationAtStart,
        PathRotationAtClosestPointOnPath,
    };
}

