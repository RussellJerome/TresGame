#pragma once
#include "CoreMinimal.h"
#include "ETresSpawnPointHeightFilterType.generated.h"

UENUM(BlueprintType)
enum ETresSpawnPointHeightFilterType {
    ETresSpawnPointHeightFilterType_DoNotCare,
    ETresSpawnPointHeightFilterType_LessThan,
    ETresSpawnPointHeightFilterType_LessEqual,
    ETresSpawnPointHeightFilterType_Equal,
    ETresSpawnPointHeightFilterType_GraterEqual,
    ETresSpawnPointHeightFilterType_GraterThan,
};

