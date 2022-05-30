#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleChallengeModeHoneypotGaugeParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeHoneypotGaugeParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 Level;
    
    UPROPERTY(EditDefaultsOnly)
    float GaugeValueIncValueRate;
    
    UPROPERTY(EditDefaultsOnly)
    int32 GaugeValueDecSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnMaxNum;
    
    UPROPERTY(EditDefaultsOnly)
    bool SpawnInSameRow;
    
    TRESGAME_API FTresWinniePuzzleChallengeModeHoneypotGaugeParam();
};

