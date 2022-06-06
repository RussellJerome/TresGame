#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickHitCountComponentType.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickHitCountComponentType : uint8 {
    HitCount,
    Accumulation,
    HitCheckOnly,
};

