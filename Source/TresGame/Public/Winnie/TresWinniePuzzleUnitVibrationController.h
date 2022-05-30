#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleUnitVibrationController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleUnitVibrationController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float VibrationPowerMin;
    
    UPROPERTY(EditDefaultsOnly)
    float VibrationPowerMax;
    
public:
    UTresWinniePuzzleUnitVibrationController();
};

