#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresWinniePuzzleBombScoreOffsetParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBombScoreOffsetParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 Column;
    
    UPROPERTY(EditDefaultsOnly)
    FVector Offset;
    
    TRESGAME_API FTresWinniePuzzleBombScoreOffsetParam();
};

