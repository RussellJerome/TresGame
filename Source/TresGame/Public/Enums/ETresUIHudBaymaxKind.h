#pragma once
#include "CoreMinimal.h"
#include "ETresUIHudBaymaxKind.generated.h"

UENUM(BlueprintType)
enum class ETresUIHudBaymaxKind : uint8 {
    None,
    FlashTracer,
    FlashTracer_MiniGame,
    HeroRescue,
    DarkCube,
    MAX,
};

