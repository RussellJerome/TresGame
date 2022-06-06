#pragma once
#include "CoreMinimal.h"
#include "EX734_FallInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX734_FallInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fWorldGroundHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fFallBeginRelativeHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fFallEndRelativeHeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_fFallTime;
    
    TRESGAME_API FEX734_FallInfo();
};

