#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleCharacterPawn.h"
#include "TresWinniePuzzleLumpyPawn.generated.h"

UCLASS()
class ATresWinniePuzzleLumpyPawn : public ATresWinniePuzzleCharacterPawn {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DecreaseMoveStartYFromLeft;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseMoveEndYFromLeft;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseMoveStartYFromRight;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseMoveEndYFromRight;
    
    UPROPERTY(EditDefaultsOnly)
    float ReadyMoveEndY;
    
    UPROPERTY(EditDefaultsOnly)
    float DecreaseMoveSpeed;
    
    ATresWinniePuzzleLumpyPawn();
};

