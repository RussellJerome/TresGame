#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickBxSingoukiColorType.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickBxSingoukiColorType : uint8 {
    Red,
    RedWait,
    Blue,
    BlueWait,
    NoSignal,
};

