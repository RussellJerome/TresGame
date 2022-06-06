#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleHoneypotGaugeIncreaseValueParam.h"
#include "TresWinniePuzzleChallengeModeHoneypotGaugeParam.h"
#include "TresWinniePuzzleHoneypotGaugeParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotGaugeParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 GaugeValueMax;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleHoneypotGaugeIncreaseValueParam> GaugeIncreaseValueParam;
    
    UPROPERTY(EditDefaultsOnly)
    float GaugeIncreaseSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float GaugeIncreaseEffectLifetime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleChallengeModeHoneypotGaugeParam> ChallengeModeParam;
    
    TRESGAME_API FTresWinniePuzzleHoneypotGaugeParam();
};

