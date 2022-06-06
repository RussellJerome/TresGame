#pragma once
#include "CoreMinimal.h"
#include "ETresGameHelpCategory.generated.h"

UENUM(BlueprintType)
enum class ETresGameHelpCategory : uint8 {
    None,
    GameSystem,
    PlayerAction,
    Battle,
    World,
    LSI,
    GumiHelp,
    GumiEditHelp,
    ReMind,
    Max,
};

