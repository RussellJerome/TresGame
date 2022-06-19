#pragma once
#include "CoreMinimal.h"
#include "TresFriendWarpPointData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresFriendWarpPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* m_WarpPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bUsedRangeXY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WarpPointRangeXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint32 m_bUsedRangeZ: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_WarpPointRangeZ;
    
    TRESGAME_API FTresFriendWarpPointData();
};

