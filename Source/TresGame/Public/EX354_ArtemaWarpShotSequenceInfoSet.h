#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotSequenceInfo.h"
#include "EX354_ArtemaWarpShotSequenceInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSequenceInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FEX354_ArtemaWarpShotSequenceInfo> m_SequenceInfoArray;
    
    TRESGAME_API FEX354_ArtemaWarpShotSequenceInfoSet();
};

