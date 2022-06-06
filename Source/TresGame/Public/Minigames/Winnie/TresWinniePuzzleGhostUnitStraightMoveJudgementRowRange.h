#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleGhostUnitStraightMoveJudgementRowRange.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleGhostUnitStraightMoveJudgementRowRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 StartRow;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EndRow;
    
    TRESGAME_API FTresWinniePuzzleGhostUnitStraightMoveJudgementRowRange();
};

