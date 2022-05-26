#pragma once
#include "CoreMinimal.h"
#include "TresEx353EveryDirectionShotParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEx353EveryDirectionShotParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float LoopPauseTime;
    
    UPROPERTY(EditDefaultsOnly)
    float PauseTime;
    
    UPROPERTY(EditDefaultsOnly)
    float NextIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float NextMissIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bInfluencedMissPauseTime: 1;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NextEraseNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NextMissEraseNum;
    
    TRESGAME_API FTresEx353EveryDirectionShotParam();
};

