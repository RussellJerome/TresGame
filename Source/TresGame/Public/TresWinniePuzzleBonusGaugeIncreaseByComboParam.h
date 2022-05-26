#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeIncreaseByComboParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseByComboParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 ComboValue;
    
    UPROPERTY(EditDefaultsOnly)
    float IncreaseValue;
    
    TRESGAME_API FTresWinniePuzzleBonusGaugeIncreaseByComboParam();
};

