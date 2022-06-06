#pragma once
#include "CoreMinimal.h"
#include "EGameOverHintType.generated.h"

UENUM(BlueprintType)
enum class EGameOverHintType : uint8 {
    CommonHint,
    SpecialHint,
    TopPriority,
    FixedHit,
};

