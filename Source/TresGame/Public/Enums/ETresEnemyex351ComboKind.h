#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyex351ComboKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyex351ComboKind : uint8 {
    Combo_VerticalSwing,
    Combo_SideSwing,
    Combo_Attract,
    Combo_JumpSlash,
    Combo_NearBlow,
    Combo_VerticalSwing2,
    Combo_AirShotDown,
    MAX,
};

