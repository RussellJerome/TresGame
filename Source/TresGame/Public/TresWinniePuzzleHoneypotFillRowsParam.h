#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleHoneypotFillRowsParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotFillRowsParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<int32> RowIdxes;
    
    TRESGAME_API FTresWinniePuzzleHoneypotFillRowsParam();
};

