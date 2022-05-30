#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx351KeyBladeComboKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx351KeyBladeComboKind : uint8 {
    Combo_LeftRotaion,
    Combo_RightRotation,
    AirCombo_VerticalSwing,
    AirCombo_SideSwing,
    AirCombo_Attract,
    AirMaliceWhip_VerticalSwing,
    AirMaliceWhip_SideSwing,
    MAX,
};

