#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float RemainingTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseSpeedCoeff;
    
    TRESGAME_API FTresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam();
};

