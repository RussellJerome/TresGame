#pragma once
#include "CoreMinimal.h"
#include "WinniePlayerStayDirection.generated.h"

UENUM(BlueprintType)
enum class WinniePlayerStayDirection : uint8 {
    StayNorth,
    StaySouth,
    StayWest,
    StayEast,
};

