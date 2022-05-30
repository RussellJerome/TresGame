#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleBoundStartMoveDirection.h"
#include "TresWinniePuzzleBoundStyleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBoundStyleParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleBoundStartMoveDirection StartMoveDirection;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MoveStartColumn;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MoveEndColumnNumDiff;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EntryRow;
    
    UPROPERTY(EditDefaultsOnly)
    int32 EntryColumn;
    
    UPROPERTY(EditDefaultsOnly)
    int32 FirstTargetRow;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BoundTimes;
    
    TRESGAME_API FTresWinniePuzzleBoundStyleParam();
};

