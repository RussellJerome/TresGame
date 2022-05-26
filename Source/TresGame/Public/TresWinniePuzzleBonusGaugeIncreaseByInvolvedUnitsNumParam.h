#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 InvolvedUnitsNum;
    
    UPROPERTY(EditDefaultsOnly)
    float IncreaseValue;
    
    TRESGAME_API FTresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam();
};

