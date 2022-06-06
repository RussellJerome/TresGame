#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx302SlowEndKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx302SlowEndKind : uint8 {
    LastBlow_EndSlow,
    LastContinuousHit_EndSlow,
    Last_EndSlow,
    MAX,
};

