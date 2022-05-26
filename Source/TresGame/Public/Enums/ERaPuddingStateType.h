#pragma once
#include "CoreMinimal.h"
#include "ERaPuddingStateType.generated.h"

UENUM(BlueprintType)
enum class ERaPuddingStateType : uint8 {
    DEFAULT,
    DAMAGE,
    ANGRY,
    SHUTTER,
    HAPPY,
};

