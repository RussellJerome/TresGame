#pragma once
#include "CoreMinimal.h"
#include "ETresSpawnPointRadiusFilterType.generated.h"

UENUM(BlueprintType)
enum ETresSpawnPointRadiusFilterType {
    ETresSpawnPointRadiusFilterType_DoNotCare,
    ETresSpawnPointRadiusFilterType_LessThan,
    ETresSpawnPointRadiusFilterType_LessEqual,
    ETresSpawnPointRadiusFilterType_Equal,
    ETresSpawnPointRadiusFilterType_GraterEqual,
    ETresSpawnPointRadiusFilterType_GraterThan,
};

