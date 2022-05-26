#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleHoneypotGaugeIncreaseValueParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotGaugeIncreaseValueParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 HoneypotComboNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 IncreaseValue;
    
    TRESGAME_API FTresWinniePuzzleHoneypotGaugeIncreaseValueParam();
};

