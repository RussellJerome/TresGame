#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADLayoutType.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADLayoutType {
    enum Type {
        Point,
        Line,
        Box,
        Polyline,
        Quadrilateral,
        TriangleStrip,
        TriangleFan,
    };
}

