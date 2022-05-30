#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserInfo.h"
#include "EX359_LaserInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_LaserInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_LaserInfo> m_LaserInfoArray;
    
    TRESGAME_API FEX359_LaserInfoSet();
};

