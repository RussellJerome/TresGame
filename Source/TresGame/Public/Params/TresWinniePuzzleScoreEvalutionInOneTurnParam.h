#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleComboEvalution.h"
#include "TresWinniePuzzleScoreEvalutionInOneTurnParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleScoreEvalutionInOneTurnParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ScoreInOneTurn;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleComboEvalution ScoreEvalution;
    
    TRESGAME_API FTresWinniePuzzleScoreEvalutionInOneTurnParam();
};

