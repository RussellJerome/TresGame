#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleUnitScore.h"
#include "WinniePuzzleUnitScoreSizeJudgementMethod.h"
#include "TresWinniePuzzleUnitScoreParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleUnitScoreParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleUnitScore> UnitScores;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleUnitScore> UnitScoresForCharacterBonus;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleUnitScoreSizeJudgementMethod UnitScoreSizeJudgementMethod;
    
    UPROPERTY(EditDefaultsOnly)
    int32 UnitScoreSizeJudgementNum;
    
    TRESGAME_API FTresWinniePuzzleUnitScoreParam();
};

