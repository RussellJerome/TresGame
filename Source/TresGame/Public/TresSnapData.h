#pragma once
#include "CoreMinimal.h"
#include "TresSnapData.generated.h"

USTRUCT(BlueprintType)
struct FTresSnapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool Snap;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float HeightOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LayHeightStartOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LayHeightEndOffset;
    
    TRESGAME_API FTresSnapData();
};

