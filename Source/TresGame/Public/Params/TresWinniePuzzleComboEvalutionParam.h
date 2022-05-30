#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComboEvalution.h"
#include "TresWinniePuzzleComboEvalutionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboEvalutionParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleComboEvalution> ComboEvalution;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BreakthroughLimitBonusScorePerCombo;
    
    TRESGAME_API FTresWinniePuzzleComboEvalutionParam();
};

