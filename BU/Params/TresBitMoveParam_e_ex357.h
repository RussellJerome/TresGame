#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresBitMoveParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresBitMoveParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval RadiusRange;
    
    UPROPERTY(EditDefaultsOnly)
    FFloatInterval HeightRange;
    
    UPROPERTY(EditDefaultsOnly)
    float AppearEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveStartIntervalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float MoveSpeed;
    
    TRESGAME_API FTresBitMoveParam_e_ex357();
};

