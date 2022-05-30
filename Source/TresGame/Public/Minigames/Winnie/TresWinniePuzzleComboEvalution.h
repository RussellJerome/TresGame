#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleComboEvalution.h"
#include "TresWinniePuzzleComboEvalution.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboEvalution {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ComboNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BonusScore;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleComboEvalution Evalution;
    
    TRESGAME_API FTresWinniePuzzleComboEvalution();
};

