#pragma once
#include "CoreMinimal.h"
#include "ETresUIHudPuddingCountDown.generated.h"

UENUM(BlueprintType)
enum class ETresUIHudPuddingCountDown : uint8 {
    Three,
    Two,
    One,
    Start,
    Finish,
    MAX,
};

