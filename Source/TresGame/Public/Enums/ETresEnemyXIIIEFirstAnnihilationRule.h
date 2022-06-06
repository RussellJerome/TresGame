#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyXIIIEFirstAnnihilationRule.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyXIIIEFirstAnnihilationRule : uint8 {
    HpOrTime,
    Hp,
    Time,
    MAX,
};

