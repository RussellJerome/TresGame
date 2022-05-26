#pragma once
#include "CoreMinimal.h"
#include "TresEwOpacityData.generated.h"

USTRUCT(BlueprintType)
struct FTresEwOpacityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Num;
    
    UPROPERTY(EditAnywhere)
    float Opacity;
    
    TRESGAME_API FTresEwOpacityData();
};

