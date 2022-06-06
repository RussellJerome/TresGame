#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx009ActionKind.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyEx009ActionKind : uint8 {
    Singleshot_One,
    Right_Step,
    Left_Step,
    MAX,
};

