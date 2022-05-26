#pragma once
#include "CoreMinimal.h"
#include "TresTimerTaskData.generated.h"

USTRUCT(BlueprintType)
struct TRESGAME_API FTresTimerTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RemoteEventName;
    
    FTresTimerTaskData();
};

