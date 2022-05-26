#pragma once
#include "CoreMinimal.h"
#include "RemyCookingCommand.generated.h"

UENUM(BlueprintType)
enum class RemyCookingCommand : uint8 {
    Up,
    Down,
    Left,
    Right,
};

