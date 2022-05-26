#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleVegetableV0.generated.h"

class UTresWinniePuzzleUnitControllerBase;
class UTresWinniePuzzlePlayerUnitControllerBase;
class UTresWinniePuzzleBossController;
class UTresWinniePuzzleSlopeActionController;

UCLASS()
class ATresWinniePuzzleVegetableV0 : public ATresWinniePuzzleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleUnitControllerBase* UnitCtrlBase;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzlePlayerUnitControllerBase* PlayerUnitCtrlBase;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleSlopeActionController* SlopeActionCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleBossController* BossCtrl;
    
public:
    ATresWinniePuzzleVegetableV0();
};

