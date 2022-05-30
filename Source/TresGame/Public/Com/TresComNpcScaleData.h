#pragma once
#include "CoreMinimal.h"
#include "TresComNpcScaleData.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcScaleData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fWidthBase;
    
    UPROPERTY(EditAnywhere)
    float m_fWidthMax;
    
    UPROPERTY(EditAnywhere)
    float m_fPriortyRangeScale;
    
    TRESGAME_API FTresComNpcScaleData();
};

