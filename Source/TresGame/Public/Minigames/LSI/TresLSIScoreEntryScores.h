#pragma once
#include "CoreMinimal.h"
#include "TresLSIScoreEntryScores.generated.h"

USTRUCT(BlueprintType)
struct FTresLSIScoreEntryScores {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 scores;
    
    TRESGAME_API FTresLSIScoreEntryScores();
};

