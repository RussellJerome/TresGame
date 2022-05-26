#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresWinniePuzzleBase.h"
#include "TresWinniePuzzleCharacterBonusDecreaseParam.h"
#include "TresWinniePuzzleFruitV0.generated.h"

class ATresWinniePuzzleLumpyPawn;
class ATresWinniePuzzleRabbitPawn;
class UTresWinniePuzzleUnitVibrationController;
class UTresWinniePuzzleAutoIncreaseController;
class UTresWinniePuzzleShootTimeLimitController;

UCLASS()
class ATresWinniePuzzleFruitV0 : public ATresWinniePuzzleBase {
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
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UTresWinniePuzzleShootTimeLimitController* ShootTimeLimitCtrl;
    
private:
    UPROPERTY(Transient)
    ATresWinniePuzzleRabbitPawn* m_pRabbitPawn;
    
    UPROPERTY(Transient)
    ATresWinniePuzzleLumpyPawn* m_pLumpyPawn;
    
public:
    ATresWinniePuzzleFruitV0();
};

