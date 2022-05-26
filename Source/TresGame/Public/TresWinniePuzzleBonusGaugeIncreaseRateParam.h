#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeIncreaseRateParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseRateParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 BonusUnitsNum;
    
    UPROPERTY(EditDefaultsOnly)
    float Rate;
    
    TRESGAME_API FTresWinniePuzzleBonusGaugeIncreaseRateParam();
};

