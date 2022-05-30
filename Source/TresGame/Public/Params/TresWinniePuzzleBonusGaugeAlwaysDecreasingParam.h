#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeAlwaysDecreasingParam.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool IsEnable;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreasingBaseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* DecreasingSpeedChangeCurve;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreasingBaseSpeedOnSecond;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* DecreasingSpeedChangeCurveOnSecond;
    
    TRESGAME_API FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam();
};

