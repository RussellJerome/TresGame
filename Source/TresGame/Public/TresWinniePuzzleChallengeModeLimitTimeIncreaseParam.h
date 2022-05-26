#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleChallengeModeLimitTimeIncreaseParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeLimitTimeIncreaseParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 Level;
    
    UPROPERTY(EditDefaultsOnly)
    float IncreaseTime;
    
    TRESGAME_API FTresWinniePuzzleChallengeModeLimitTimeIncreaseParam();
};

