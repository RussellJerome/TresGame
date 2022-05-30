#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleComponentBase.h"
#include "WinniePuzzleSlopeActionRemoveFindingTarget.h"
#include "TresWinniePuzzleSlopeActionController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresWinniePuzzleSlopeActionController : public UTresWinniePuzzleComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float StickSlopingValidValue;
    
    UPROPERTY(EditDefaultsOnly)
    float UnitMovingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    WinniePuzzleSlopeActionRemoveFindingTarget SlopeActionRemoveFindingTarget;
    
    UPROPERTY(EditDefaultsOnly)
    bool InvokeSlopeActionUntilNoMovableUnit;
    
    UPROPERTY(EditDefaultsOnly)
    float SlopePowerMax;
    
    UPROPERTY(EditDefaultsOnly)
    float IncreasingPowerPerUnit;
    
    UPROPERTY(EditDefaultsOnly)
    int32 InvokeSlopeActionStoreTimesMax;
    
public:
    UTresWinniePuzzleSlopeActionController();
};

