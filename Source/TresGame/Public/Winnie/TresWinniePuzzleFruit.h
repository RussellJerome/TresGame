#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleCharacterBonusDecreaseParam.h"
#include "TresWinniePuzzleFruit.generated.h"

class ATresWinniePuzzleLumpyPawn;
class ATresWinniePuzzleRabbitPawn;
class UTresWinniePuzzleUnitVibrationController;
class UTresWinniePuzzleAutoIncreaseController;

UCLASS()
class ATresWinniePuzzleFruit : public ATresWinniePuzzleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleRabbitPawn> RabbitPawn;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresWinniePuzzleLumpyPawn> LumpyPawn;
    
    UPROPERTY(EditDefaultsOnly)
    FTresWinniePuzzleCharacterBonusDecreaseParam DecreaseParam;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleUnitVibrationController* UnitVibrationCtrl;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleAutoIncreaseController* AutoIncreaseCtrl;
    
private:
    UPROPERTY(Transient)
    ATresWinniePuzzleRabbitPawn* m_pRabbitPawn;
    
    UPROPERTY(Transient)
    ATresWinniePuzzleLumpyPawn* m_pLumpyPawn;
    
public:
    ATresWinniePuzzleFruit();
};

