#pragma once
#include "CoreMinimal.h"
#include "ETresFloorTestMode.generated.h"

UENUM(BlueprintType)
namespace ETresFloorTestMode {
    enum Type {
        Navmesh,
        Collision,
        NavmeshAndCollisionCheck,
    };
}

