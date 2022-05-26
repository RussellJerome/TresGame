#pragma once
#include "CoreMinimal.h"
#include "GFxHitTestType.generated.h"

UENUM(BlueprintType)
namespace GFxHitTestType {
    enum Type {
        HitTest_Bounds,
        HitTest_Shapes,
        HitTest_ButtonEvents,
        HitTest_ShapesNoInvisible,
        HitTest_MAX UMETA(Hidden),
    };
}

