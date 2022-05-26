#pragma once
#include "CoreMinimal.h"
#include "SprinklePepperV2MainState.generated.h"

UENUM(BlueprintType)
enum class SprinklePepperV2MainState : uint8 {
    None,
    TypeABPrepare,
    TypeABSloping,
    TypeABCalculate,
    TypeCDPrepare,
    TypeCDSloping,
    TypeCDCalculate,
    WaitThrowAnimation,
    WaitAnimation,
    TypeABWaitStickNeutral,
    TypeCDWaitStickNeutral,
    GameEndWaitThrowAnimation,
    GameEnd,
};

