#pragma once
#include "CoreMinimal.h"
#include "MissionIntervalParamTimeStamp_e_ex082.h"
#include "MissionIntervalParam_e_ex082.generated.h"

USTRUCT(BlueprintType)
struct FMissionIntervalParam_e_ex082 {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    uint8 bEnableTimeStampInterval: 1;
    
    UPROPERTY(EditInstanceOnly)
    float StartIntervalTime;
    
    UPROPERTY(EditInstanceOnly)
    float IntervalReduceTime;
    
    UPROPERTY(EditInstanceOnly)
    float MinIntervalTime;
    
    UPROPERTY(EditInstanceOnly)
    TArray<FMissionIntervalParamTimeStamp_e_ex082> TimeStampIntervalArray;
    
    TRESGAME_API FMissionIntervalParam_e_ex082();
};

