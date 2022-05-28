#pragma once
#include "CoreMinimal.h"
#include "TresShotParam_e_ex701.generated.h"

USTRUCT(BlueprintType)
struct FTresShotParam_e_ex701 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 Num;
    
    UPROPERTY(EditDefaultsOnly)
    float Angle;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingTargetRange;
    
    TRESGAME_API FTresShotParam_e_ex701();
};

