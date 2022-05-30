#pragma once
#include "CoreMinimal.h"
#include "WinniePlayerSituation.generated.h"

UENUM(BlueprintType)
enum class WinniePlayerSituation : uint8 {
    None,
    Normal,
    Weapon,
    Battle,
    Fixed,
};

