#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx353CatchAfterSituation.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx353CatchAfterSituation : uint8 {
    ChangeSituation,
    Continuation,
    AbsoluteAir,
    Max,
};

