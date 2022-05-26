#pragma once
#include "CoreMinimal.h"
#include "ETresUISnowSlideCountDownType.generated.h"

UENUM(BlueprintType)
enum class ETresUISnowSlideCountDownType : uint8 {
    Three,
    Two,
    One,
    Start,
    Finish,
    Max,
};

