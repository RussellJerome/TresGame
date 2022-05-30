#pragma once
#include "CoreMinimal.h"
#include "TresLSIScoreEntryStages.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryStages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 stages;
    
    TRESGAME_API FTresLSIScoreEntryStages();
};

