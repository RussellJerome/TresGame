#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleSoundEffect.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleSoundEffect : uint8 {
    Countdown,
    GameStart,
    GameClear,
    GameOver,
    Match1st,
    Match2nd,
    Match3rd,
    Aiming,
    SwitchUnit,
    FillBuckets,
    DecreaseBucket,
    PowerGauge,
    UnitVibration,
    AdditionalBonus,
    ResultScore,
    ResultNewRecord,
    ResultEvalution,
};

