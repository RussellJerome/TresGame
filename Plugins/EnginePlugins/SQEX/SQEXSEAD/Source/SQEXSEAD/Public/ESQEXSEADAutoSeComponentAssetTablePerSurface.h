#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSeComponentAssetTablePerSurface.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSeComponentAssetTablePerSurface {
    enum Type {
        Walk,
        Run,
        Jump,
        LandNormal,
        LandHard,
        FootShuffle,
        MAX,
    };
}

