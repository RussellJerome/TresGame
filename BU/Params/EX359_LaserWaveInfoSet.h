#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserWaveInfo.h"
#include "EX359_LaserWaveInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_LaserWaveInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_LaserWaveInfo> m_LaserWaveInfoArray;
    
    TRESGAME_API FEX359_LaserWaveInfoSet();
};

