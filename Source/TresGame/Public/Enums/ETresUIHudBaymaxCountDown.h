#pragma once
#include "CoreMinimal.h"
#include "ETresUIHudBaymaxCountDown.generated.h"

UENUM(BlueprintType)
enum class ETresUIHudBaymaxCountDown : uint8 {
    Ready,
    Three,
    Two,
    One,
    Go,
    Finish,
    Finish_End,
    MAX,
};

