#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleHoneypotFillProbabilityParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotFillProbabilityParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 diffNumBetweenMaxAndExist;
    
    UPROPERTY(EditDefaultsOnly)
    float spawnNewOneProbability;
    
    TRESGAME_API FTresWinniePuzzleHoneypotFillProbabilityParam();
};

