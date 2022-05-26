#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickDitherFade_Invoker.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickDitherFade_Invoker : uint8 {
    Clip,
    Gimmick,
    Max,
    ETresGimmickDitherFade_MAX UMETA(Hidden),
};

