#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "TresWinniePuzzlePlayerPawn.generated.h"

UCLASS()
class ATresWinniePuzzlePlayerPawn : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 RestingIdlingPlayTimes;
    
    UPROPERTY(EditDefaultsOnly)
    float WalkingRunningRotateRate;
    
    UPROPERTY(EditDefaultsOnly)
    float StartWalkingStickValue;
    
    UPROPERTY(EditDefaultsOnly)
    float WalkingSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float StartRunningStickValue;
    
    UPROPERTY(EditDefaultsOnly)
    float RunningSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float StartTurnStickValue;
    
    UPROPERTY(EditDefaultsOnly)
    float TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float RollSpeed;
    
    ATresWinniePuzzlePlayerPawn();
};

