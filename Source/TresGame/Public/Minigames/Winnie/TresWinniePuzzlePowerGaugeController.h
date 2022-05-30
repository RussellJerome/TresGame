#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzlePowerGaugeController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzlePowerGaugeController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<float> PercetagePerLevel;
    
    UPROPERTY(EditDefaultsOnly)
    float RateOfChange;
    
public:
    UTresWinniePuzzlePowerGaugeController();
};

