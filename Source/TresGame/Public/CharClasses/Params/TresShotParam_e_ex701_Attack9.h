#pragma once
#include "CoreMinimal.h"
#include "TresShotParam_e_ex701_Attack9.generated.h"

USTRUCT(BlueprintType)
struct FTresShotParam_e_ex701_Attack9 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float EndRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float EndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingStartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float HomingTargetRange;
    
    TRESGAME_API FTresShotParam_e_ex701_Attack9();
};

