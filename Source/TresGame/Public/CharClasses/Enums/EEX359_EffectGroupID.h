#pragma once
#include "CoreMinimal.h"
#include "EEX359_EffectGroupID.generated.h"

UENUM(BlueprintType)
enum EEX359_EffectGroupID {
    EEX359_EffectGroupID_WarpDisappear,
    EEX359_EffectGroupID_WarpAppear,
    EEX359_EffectGroupID_FastMoveStart,
    EEX359_EffectGroupID_FastMoveEnd,
    EEX359_EffectGroupID_FastMove,
    EEX359_EffectGroupID_LaserRainShot,
    EEX359_EffectGroupID_FinalBrakeAura,
    EEX359_EffectGroupID_Max,
};

