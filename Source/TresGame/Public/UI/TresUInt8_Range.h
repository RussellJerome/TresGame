#pragma once
#include "CoreMinimal.h"
#include "TresUInt8_Range.generated.h"

USTRUCT(BlueprintType)
struct FTresUInt8_Range {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_uMinValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 m_uMaxValue;
    
    TRESGAME_API FTresUInt8_Range();
};

