#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaRunShotSequenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FEX354_ArtemaRunShotSequenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fYaw;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fHeightOffset;
    
    TRESGAME_API FEX354_ArtemaRunShotSequenceInfo();
};

