#pragma once
#include "CoreMinimal.h"
#include "EGFxAlign.generated.h"

UENUM(BlueprintType)
namespace EGFxAlign {
    enum Type {
        Center,
        TopCenter,
        BottomCenter,
        CenterLeft,
        CenterRight,
        TopLeft,
        TopRight,
        BottomLeft,
        BottomRight,
    };
}

