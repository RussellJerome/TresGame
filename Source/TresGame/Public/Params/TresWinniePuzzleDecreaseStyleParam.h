#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleDecreaseStyleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleDecreaseStyleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ColumnNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DecreaseColumnNum1st;
    
    UPROPERTY(EditDefaultsOnly)
    int32 DecreaseColumnNum2nd;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ColumnDiffPerDecrease;
    
    TRESGAME_API FTresWinniePuzzleDecreaseStyleParam();
};

