#pragma once
#include "CoreMinimal.h"
#include "TresFloat32_Range.generated.h"

USTRUCT(BlueprintType)
struct FTresFloat32_Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMinValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fMaxValue;
    
    TRESGAME_API FTresFloat32_Range();
};

