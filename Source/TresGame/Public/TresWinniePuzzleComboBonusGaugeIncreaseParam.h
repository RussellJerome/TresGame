#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeIncreaseByComboParam.h"
#include "TresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam.h"
#include "TresWinniePuzzleBonusGaugeIncreaseRateParam.h"
#include "TresWinniePuzzleComboBonusGaugeIncreaseParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboBonusGaugeIncreaseParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleBonusGaugeIncreaseByComboParam> IncreaseByComboParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam> IncreaseByInvolvedUnitsNumParam;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleBonusGaugeIncreaseRateParam> IncreaseRateParam;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableIncreaseRateWhenGetCombo2OrMore;
    
    TRESGAME_API FTresWinniePuzzleComboBonusGaugeIncreaseParam();
};

