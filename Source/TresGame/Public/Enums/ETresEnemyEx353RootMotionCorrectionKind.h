#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx353RootMotionCorrectionKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx353RootMotionCorrectionKind : uint8 {
    CurveData,
    DistRate,
    AimFinishLocation,
    MAX,
};

