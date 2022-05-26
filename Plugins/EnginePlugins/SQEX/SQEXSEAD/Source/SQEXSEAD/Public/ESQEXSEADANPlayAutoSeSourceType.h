#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADANPlayAutoSeSourceType.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADANPlayAutoSeSourceType {
    enum Type {
        MotionSoundType,
        AuxSurfaceTable,
        SurfaceTableAsset,
    };
}

