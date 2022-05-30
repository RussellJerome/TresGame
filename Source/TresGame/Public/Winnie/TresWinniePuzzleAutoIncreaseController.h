#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleAutoIncreaseSpeedParam.h"
#include "TresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam.h"
#include "TresWinniePuzzleAutoIncreaseController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleAutoIncreaseController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool EnableAutoIncreaseWhenShootWait;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableResetIncreaseWhenSameKindUnitsRemoving;
    
    UPROPERTY(EditDefaultsOnly)
    bool EnableResetIncreaseWhenInvokeCharacterBonus;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoIncreaseGaugeMaxValue;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleAutoIncreaseSpeedParam> AutoIncreaseSpeedParams;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam> ChallengeModeAutoIncreaseSpeedCoeffParam;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoIncreaseMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoIncreaseWarningVibrationTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ForceIncreaseMinColumns;
    
public:
    UTresWinniePuzzleAutoIncreaseController();
};

