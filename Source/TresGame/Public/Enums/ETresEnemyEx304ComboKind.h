#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx304ComboKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx304ComboKind : uint8 {
    Combo_Short,
    Combo_Medium,
    Combo_Wide,
    Combo_FinishBlow,
    Combo_FinishToss,
    MAX,
};

