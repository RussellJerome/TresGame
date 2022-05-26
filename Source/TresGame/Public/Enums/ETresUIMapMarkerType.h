#pragma once
#include "CoreMinimal.h"
#include "ETresUIMapMarkerType.generated.h"

UENUM(BlueprintType)
enum class ETresUIMapMarkerType : uint8 {
    SavePoint,
    Shop,
    MapLine,
    EnemyGigas,
    EnemyGigasAce,
    Gigas,
    EnemySea,
    EnemySeaLuxord,
    Max,
};

