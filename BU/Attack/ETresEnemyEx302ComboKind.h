#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx302ComboKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx302ComboKind : uint8 {
    Combo_VerticalSwing,
    Combo_SideSwing,
    Combo_Attract,
    Combo_JumpSlash,
    Combo_NearBlow,
    Combo_VerticalSwing2,
    Combo_AirShotDown,
    MAX,
};

