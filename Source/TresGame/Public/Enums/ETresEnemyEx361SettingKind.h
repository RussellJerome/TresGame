#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx361SettingKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx361SettingKind : uint8 {
    Myself,
    Target,
    Sandwich,
    Ceiling,
    Ring,
    Row,
    RowTarget,
    MAX,
};

