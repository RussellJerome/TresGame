#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuIntPair.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuIntPair {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 m_FirstInt;
    
    UPROPERTY()
    int32 m_SecondInt;
    
    TRESGAME_API FTresDebugMenuIntPair();
};

