#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamInfo.h"
#include "EX359_BeamInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX359_BeamInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX359_BeamInfo> m_BeamInfoArray;
    
    TRESGAME_API FEX359_BeamInfoSet();
};

