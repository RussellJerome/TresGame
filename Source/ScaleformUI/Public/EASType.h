#pragma once
#include "CoreMinimal.h"
#include "EASType.generated.h"

UENUM(BlueprintType)
namespace EASType {
    enum Type {
        Undefined,
        Null,
        Boolean,
        Int,
        Number,
        String,
        StringW,
        Object,
        DisplayObject,
    };
}

