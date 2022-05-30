#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresFriendWarpPointData.h"
#include "TresWarpFriendNpcVolume.generated.h"

UCLASS()
class ATresWarpFriendNpcVolume : public ATresVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bVolumeOutEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bUsedWarpPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_DelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTresFriendWarpPointData> m_WarpPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_IntervalTime;
    
    ATresWarpFriendNpcVolume();
};

