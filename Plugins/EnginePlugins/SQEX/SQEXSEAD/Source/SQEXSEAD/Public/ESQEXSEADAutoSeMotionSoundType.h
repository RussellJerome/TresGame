#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSeMotionSoundType.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSeMotionSoundType {
    enum Type {
        None,
        Walk,
        Run,
        Jump,
        LandNormal,
        LandHard,
        FootShuffle,
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
    };
}

