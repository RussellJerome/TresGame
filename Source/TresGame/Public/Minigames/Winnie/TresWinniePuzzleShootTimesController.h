#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "TresWinniePuzzleShootTimesController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleShootTimesController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool EnableShootTimesCtrl;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ShootTimesInitValue;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ShootTimesMaxValue;
    
public:
    UTresWinniePuzzleShootTimesController();
};

