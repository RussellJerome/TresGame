#pragma once
#include "CoreMinimal.h"
#include "EFollowActorMoveStyle.generated.h"

UENUM(BlueprintType)
enum class EFollowActorMoveStyle : uint8 {
    LINEAR,
    EASE_INOUT_SINE,
};

