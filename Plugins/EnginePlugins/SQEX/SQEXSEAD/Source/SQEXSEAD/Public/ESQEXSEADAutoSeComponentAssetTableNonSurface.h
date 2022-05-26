#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSeComponentAssetTableNonSurface.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSeComponentAssetTableNonSurface {
    enum Type {
        RustleShort,
        RustleLong,
        RustleFootShort,
        RustleFootLong,
        WingFlapUp,
        WingFlapDown,
        SwingKnock,
        SwingRub,
        CrouchDown,
        StandUp,
        MAX,
    };
}

