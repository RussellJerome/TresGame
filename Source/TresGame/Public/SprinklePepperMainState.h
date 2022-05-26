#pragma once
#include "CoreMinimal.h"
#include "SprinklePepperMainState.generated.h"

UENUM(BlueprintType)
enum class SprinklePepperMainState : uint8 {
    None,
    Prepare,
    Sloping,
    Calculate,
    Finish,
};

