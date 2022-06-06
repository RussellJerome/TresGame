#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx353ComboKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx353ComboKind : uint8 {
    Combo_Short,
    Combo_Medium,
    Combo_Wide,
    Combo_FinishBlow,
    Combo_FinishToss,
    Combo_KickUp,
    Combo_RushRoundhouseKick,
    MAX,
};

