#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleTotalScoreEvalution.h"
#include "TresWinniePuzzleTotalScoreEvalution.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleTotalScoreEvalution {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 totalScore;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleTotalScoreEvalution Evalution;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> GotItemNumList;
    
    TRESGAME_API FTresWinniePuzzleTotalScoreEvalution();
};

