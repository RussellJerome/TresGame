#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleAutoIncreaseSpeedParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleAutoIncreaseSpeedParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ColumnsNum;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseSpeed;
    
    TRESGAME_API FTresWinniePuzzleAutoIncreaseSpeedParam();
};

