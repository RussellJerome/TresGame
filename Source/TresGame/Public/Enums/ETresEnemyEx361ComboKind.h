#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx361ComboKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx361ComboKind : uint8 {
    AirCombo_VerticalSwing,
    AirCombo_Turning,
    AirCombo_Thrust,
    AirCombo_ContinuousAttack,
    AirCombo_Beat,
    MAX,
};

