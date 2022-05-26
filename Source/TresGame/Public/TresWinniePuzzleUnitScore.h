#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleUnitScore.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleUnitScore {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 UnitNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 Score;
    
    TRESGAME_API FTresWinniePuzzleUnitScore();
};

