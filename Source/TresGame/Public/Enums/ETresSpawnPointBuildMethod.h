#pragma once
#include "CoreMinimal.h"
#include "ETresSpawnPointBuildMethod.generated.h"

UENUM(BlueprintType)
enum class ETresSpawnPointBuildMethod : uint8 {
    Simple,
    PathFinding,
};

