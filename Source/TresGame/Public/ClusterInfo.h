#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ClusterInfo.generated.h"

USTRUCT()
struct FClusterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    float VoxelSize;
    
    UPROPERTY(VisibleAnywhere)
    FBox Bounds;
    
    UPROPERTY(VisibleAnywhere)
    FIntVector VoxelNum;
    
    UPROPERTY(VisibleAnywhere)
    TMap<uint32, uint32> OverlapInfo;
    
    TRESGAME_API FClusterInfo();
};

