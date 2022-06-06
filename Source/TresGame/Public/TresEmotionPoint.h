#pragma once
#include "CoreMinimal.h"
#include "TresEmotionPoint.generated.h"

USTRUCT(BlueprintType)
struct FTresEmotionPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Hope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Fear;
    
    TRESGAME_API FTresEmotionPoint();
};

